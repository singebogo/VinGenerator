#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>


struct BitWeight
{
   char  id;
   int   weight;
}; 

void mapWeight(BitWeight* bitWeight)
{
	/*
	lists = {
		"A": 1,    "B": 2,    "C": 3,    "D": 4,    "E": 5,    "F": 6,    "G": 7,    "H": 8,    "J": 1,    "K": 2,
		"L": 3,    "M": 4,    "N": 5,    "P": 7,    "R": 9,    "S": 2,    "T": 3,    "U": 4,    "V": 5,    "W": 6,
		"X": 7,    "Y": 8,    "Z": 9,
		"0": 0,    "1": 1,    "2": 2,    "3": 3,    "4": 4,    "5": 5,    "6": 6,    "7": 7,    "8": 8,    "9": 9,
	}
	*/
	bitWeight[0].id ='A';
	bitWeight[0].weight = 1;
	bitWeight[1].id ='B';
	bitWeight[1].weight = 2;
	bitWeight[2].id ='C';
	bitWeight[2].weight = 3;
	bitWeight[3].id ='D';
	bitWeight[3].weight = 4;
	bitWeight[4].id ='E';
	bitWeight[4].weight = 5;
	bitWeight[5].id ='F';
	bitWeight[5].weight = 6;
	bitWeight[6].id ='G';
	bitWeight[6].weight = 7;
	bitWeight[7].id ='H';
	bitWeight[7].weight = 8;
	bitWeight[8].id ='J';
	bitWeight[8].weight = 1;
	bitWeight[9].id ='K';
	bitWeight[9].weight = 2;
	bitWeight[10].id ='L';
	bitWeight[10].weight = 3;
	bitWeight[11].id ='M';
	bitWeight[11].weight = 4;
	bitWeight[12].id ='N';
	bitWeight[12].weight = 5;
	bitWeight[13].id ='P';
	bitWeight[13].weight = 7;
	bitWeight[14].id ='R';
	bitWeight[14].weight = 8;
	bitWeight[15].id ='S';
	bitWeight[15].weight = 2;
	bitWeight[16].id ='T';
	bitWeight[16].weight = 3;
	bitWeight[17].id ='U';
	bitWeight[17].weight = 4;
	bitWeight[18].id ='V';
	bitWeight[18].weight = 5;
	bitWeight[19].id ='W';
	bitWeight[19].weight = 6;
	bitWeight[20].id ='X';
	bitWeight[20].weight = 7;
	bitWeight[21].id ='Y';
	bitWeight[21].weight = 8;
	bitWeight[22].id ='Z';
	bitWeight[22].weight = 9;
	bitWeight[23].id ='0';
	bitWeight[23].weight = 0;
	bitWeight[24].id ='1';
	bitWeight[24].weight = 1;
	bitWeight[25].id ='2';
	bitWeight[25].weight = 2;
	bitWeight[26].id ='3';
	bitWeight[26].weight = 3;
	bitWeight[27].id ='4';
	bitWeight[27].weight = 4;
	bitWeight[28].id ='5';
	bitWeight[28].weight = 5;
	bitWeight[29].id ='6';
	bitWeight[29].weight = 6;
	bitWeight[30].id ='7';
	bitWeight[30].weight = 7;
	bitWeight[31].id ='8';
	bitWeight[31].weight = 8;
	bitWeight[32].id ='9';
	bitWeight[32].weight = 9;
	
}

void generate_random_string(char* buff, int length)
{
	//生成包含大小写字母和数字的序列
	char metachar[] = "ABCDEFGHJKLMNPRSTUVWXYZ0123456789"; 

	srand((unsigned)time(0) + rand());
	for(int i=0; i<length; i++)
	{
		buff[i] = metachar[rand() % (33 - i)];
	}

	buff[length] = '\0';
	return;
}

int findWeight(BitWeight* bitWeight, char pos)
{
	// 查询对应的权位
	for(int i=0; i<33; i++)
	{
	
		if(bitWeight[i].id == pos)
		{		
			return bitWeight[i].weight;
		}
	}
	return -1;
}

void getPostion(char* positions, BitWeight* bitWeight, char* buff)
{
	
	// 计算每个位置的权位
	for(int i=0; i < 17; i++)
	{
		if (i != 8)
		{
			// 查询权位
			positions[i] = findWeight(bitWeight, buff[i]);
		}
		else
		{
			positions[i] = 0;
		}
	}
		
}


int getBitWeight(char* positions)
{
	int sum = 0;
	for(int i=0; i<17; i++)
	{
		if(i < 7)
		{
			sum += int(positions[i]) * (8-1);
		}
		else if(i == 7)
		{
			sum += int(positions[i]) * (i + 3);
		}
		else if(i == 8)
		{
			
		}
		else
		{
			sum += int(positions[i]) * (9 - (i - 9));
		}
	}
	return sum;
}

char getVin9(int sum)
{
	char pos9 = 'X';

	if(sum % 11 == 10)
	{
		pos9 = 'X';
	}
	else
	{
		pos9 = '0' + (sum % 11);	
	}
	return pos9;
}

void generVin(char* buff)
{
	BitWeight bitWeight[33];
	// 构建权位
	mapWeight(bitWeight);
	// 随机17位字符串	
	generate_random_string(buff, 17);
	// 构建每个位置的权位
	char positions[17] = {0};
	getPostion(positions, bitWeight, buff);
	// 计算第九位权位
	int sum = getBitWeight(positions); 
	buff[8] = getVin9(sum);
	return;
}
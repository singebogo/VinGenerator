// VinGeneratorDlg.h : header file
//

#if !defined(AFX_VINGENERATORDLG_H__07A46A5F_6877_43E4_86FD_F0777E0B4A45__INCLUDED_)
#define AFX_VINGENERATORDLG_H__07A46A5F_6877_43E4_86FD_F0777E0B4A45__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CVinGeneratorDlg dialog

class CVinGeneratorDlg : public CDialog
{
// Construction
public:
	CVinGeneratorDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CVinGeneratorDlg)
	enum { IDD = IDD_VINGENERATOR_DIALOG };
	CEdit	m_vins;
	UINT	m_count;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVinGeneratorDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CVinGeneratorDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnGener();
	afx_msg void OnClear();
	afx_msg void OnUpdateEdit1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VINGENERATORDLG_H__07A46A5F_6877_43E4_86FD_F0777E0B4A45__INCLUDED_)

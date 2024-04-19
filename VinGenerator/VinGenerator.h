// VinGenerator.h : main header file for the VINGENERATOR application
//

#if !defined(AFX_VINGENERATOR_H__012866E5_CA14_4AEF_AEA4_9E099C409451__INCLUDED_)
#define AFX_VINGENERATOR_H__012866E5_CA14_4AEF_AEA4_9E099C409451__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CVinGeneratorApp:
// See VinGenerator.cpp for the implementation of this class
//

class CVinGeneratorApp : public CWinApp
{
public:
	CVinGeneratorApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVinGeneratorApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CVinGeneratorApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VINGENERATOR_H__012866E5_CA14_4AEF_AEA4_9E099C409451__INCLUDED_)

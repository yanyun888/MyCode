// MFCMdi.h : main header file for the MFCMDI application
//

#if !defined(AFX_MFCMDI_H__2637B456_A6C2_4F61_B811_AAA26EC0EE47__INCLUDED_)
#define AFX_MFCMDI_H__2637B456_A6C2_4F61_B811_AAA26EC0EE47__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"       // main symbols

/////////////////////////////////////////////////////////////////////////////
// CMFCMdiApp:
// See MFCMdi.cpp for the implementation of this class
//

class CMFCMdiApp : public CWinApp
{
public:
	CMFCMdiApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CMFCMdiApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation
	//{{AFX_MSG(CMFCMdiApp)
	afx_msg void OnAppAbout();
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_MFCMDI_H__2637B456_A6C2_4F61_B811_AAA26EC0EE47__INCLUDED_)

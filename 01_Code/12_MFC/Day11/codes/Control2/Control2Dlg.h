// Control2Dlg.h : header file
//

#if !defined(AFX_CONTROL2DLG_H__DC77722D_4EA6_4CAB_B02C_ADCF83C95C54__INCLUDED_)
#define AFX_CONTROL2DLG_H__DC77722D_4EA6_4CAB_B02C_ADCF83C95C54__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CControl2Dlg dialog

class CControl2Dlg : public CDialog
{
// Construction
public:
	CControl2Dlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CControl2Dlg)
	enum { IDD = IDD_CONTROL2_DIALOG };
	CSliderCtrl	m_wndSlider;
	CProgressCtrl	m_wndProgress;
	CSpinButtonCtrl	m_wndSpin;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CControl2Dlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CControl2Dlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnMove();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_CONTROL2DLG_H__DC77722D_4EA6_4CAB_B02C_ADCF83C95C54__INCLUDED_)

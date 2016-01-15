// VODServerDoc.h : interface of the CVODServerDoc class
//
/////////////////////////////////////////////////////////////////////////////

#if !defined(AFX_VODSERVERDOC_H__03E05A7B_B93C_4D4F_947B_1C36F5801D1C__INCLUDED_)
#define AFX_VODSERVERDOC_H__03E05A7B_B93C_4D4F_947B_1C36F5801D1C__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


class CVODServerDoc : public CDocument
{
protected: // create from serialization only
	CVODServerDoc();
	DECLARE_DYNCREATE(CVODServerDoc)

// Attributes
public:

// Operations
public:

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CVODServerDoc)
	public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
	//}}AFX_VIRTUAL

// Implementation
public:
	virtual ~CVODServerDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	//{{AFX_MSG(CVODServerDoc)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_VODSERVERDOC_H__03E05A7B_B93C_4D4F_947B_1C36F5801D1C__INCLUDED_)

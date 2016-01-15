// ThreadSynBySemaphoreDlg.h : 头文件
//

#pragma once

// CThreadSynBySemaphoreDlg 对话框
class CThreadSynBySemaphoreDlg : public CDialog
{
// 构造
public:
	CThreadSynBySemaphoreDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
	enum { IDD = IDD_THREADSYNBYSEMAPHORE_DIALOG };


	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持

// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
#if defined(_DEVICE_RESOLUTION_AWARE) && !defined(WIN32_PLATFORM_WFSP)
	afx_msg void OnSize(UINT /*nType*/, int /*cx*/, int /*cy*/);
#endif
	DECLARE_MESSAGE_MAP()

private:
   //线程函数
   static DWORD  ThreadProc(PVOID pArg);
public:
	afx_msg void OnDestroy();
	afx_msg void OnBnClickedBtnexec();
};

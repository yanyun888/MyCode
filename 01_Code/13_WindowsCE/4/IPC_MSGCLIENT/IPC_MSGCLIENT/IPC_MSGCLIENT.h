// IPC_MSGCLIENT.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#ifdef POCKETPC2003_UI_MODEL
#include "resourceppc.h"
#endif 

// CIPC_MSGCLIENTApp:
// �йش����ʵ�֣������ IPC_MSGCLIENT.cpp
//

class CIPC_MSGCLIENTApp : public CWinApp
{
public:
	CIPC_MSGCLIENTApp();
	
// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CIPC_MSGCLIENTApp theApp;
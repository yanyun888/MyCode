// IPC_MapFile.h : PROJECT_NAME Ӧ�ó������ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#ifdef POCKETPC2003_UI_MODEL
#include "resourceppc.h"
#endif 

// CIPC_MapFileApp:
// �йش����ʵ�֣������ IPC_MapFile.cpp
//

class CIPC_MapFileApp : public CWinApp
{
public:
	CIPC_MapFileApp();
	
// ��д
public:
	virtual BOOL InitInstance();

// ʵ��

	DECLARE_MESSAGE_MAP()
};

extern CIPC_MapFileApp theApp;
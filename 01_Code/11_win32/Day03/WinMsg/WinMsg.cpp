#include "stdafx.h"
HINSTANCE g_hInstance = 0;
//���ڴ�������(������Ϣ)
LRESULT CALLBACK WndProc( HWND hWnd, UINT msgID, 
						 WPARAM wParam, LPARAM lParam )
{
	switch( msgID )
	{
	case WM_SYSCOMMAND:
		if( wParam==SC_CLOSE )
		{
			BOOL nRet = MessageBox( hWnd, "�Ƿ��˳�", 
							"Infor", MB_YESNO );
			if( nRet==IDYES )
			{
				//ʲô����д
			}else{
				return 0;
			}
		}
		break;
	case WM_DESTROY:
		PostQuitMessage( 0 );
		break;
	}
	return DefWindowProc( hWnd, msgID, wParam, lParam );
}
//ע�ᴰ����
void Register( LPSTR lpClassName, WNDPROC wndproc )
{
	WNDCLASSEX wce = { 0 };
	wce.cbSize = sizeof( wce );
	wce.cbClsExtra = 0;
	wce.cbWndExtra = 0;
	wce.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wce.hCursor = NULL;
	wce.hIcon = NULL;
	wce.hIconSm = NULL;
	wce.hInstance = g_hInstance;
	wce.lpfnWndProc = wndproc;
	wce.lpszClassName = lpClassName;
	wce.lpszMenuName = NULL;
	wce.style = CS_HREDRAW | CS_VREDRAW;
	RegisterClassEx( &wce );
}
//����������
HWND CreateMain( LPSTR lpClassName, LPSTR lpWndName )
{
	HWND hWnd = CreateWindowEx( 0, lpClassName, lpWndName,
		WS_OVERLAPPEDWINDOW,CW_USEDEFAULT,
		CW_USEDEFAULT, CW_USEDEFAULT,
		CW_USEDEFAULT, NULL, NULL, 
		g_hInstance, NULL );
	return hWnd;
}
//��ʾ����
void Display( HWND hWnd )
{
	ShowWindow( hWnd, SW_SHOW );
	UpdateWindow( hWnd );
}
//��Ϣѭ��
void Message( )
{
	MSG nMsg = { 0 };
	while( GetMessage( &nMsg, NULL, 0, 0 ) )
	{
		TranslateMessage( &nMsg );
		DispatchMessage( &nMsg );
	}
}
int APIENTRY WinMain(HINSTANCE hInstance,
                     HINSTANCE hPrevInstance,
                     LPSTR     lpCmdLine,
                     int       nCmdShow)
{
	g_hInstance = hInstance;
	Register( "Main", WndProc );
	HWND hWnd = CreateMain( "Main", "window" );
	Display( hWnd );
	Message( );
	return 0;
}



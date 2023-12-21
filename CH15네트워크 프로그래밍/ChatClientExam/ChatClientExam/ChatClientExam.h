
// ChatClientExam.h: PROJECT_NAME 응용 프로그램에 대한 주 헤더 파일입니다.
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'pch.h' before including this file for PCH"
#endif

#include "resource.h"		// 주 기호입니다.


// CChatClientExamApp:
// 이 클래스의 구현에 대해서는 ChatClientExam.cpp을(를) 참조하세요.
//
#include "CClientSocket.h"
class CChatClientExamApp : public CWinApp
{
public:
	CChatClientExamApp();
	CClientSocket *m_pClient;
// 재정의입니다.
public:
	virtual BOOL InitInstance();
	void Connect(void);
	void CleanUp(void);
	void sendData(CString strData);
	void ReceiveData(void);
	void CloseChild(void);
// 구현입니다.

	DECLARE_MESSAGE_MAP()
};

extern CChatClientExamApp theApp;

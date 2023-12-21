// CClientSocket.cpp: 구현 파일
//

#include "pch.h"
#include "ChatClientExam.h"
#include "CClientSocket.h"


// CClientSocket

CClientSocket::CClientSocket()
{
}

CClientSocket::~CClientSocket()
{
}


// CClientSocket 멤버 함수
void CClientSocket::OnReceive(int nErrorCode)
{
	((CChatClientExamApp*)AfxGetApp()) ->ReceiveData();	//데이터를 읽는다.
	CSocket::OnReceive(nErrorCode);
}

void CClientSocket::OnClose(int nErrorCode)
{
	((CChatClientExamApp*)AfxGetApp()) ->CloseChild();
	CSocket::OnClose(nErrorCode);
}
﻿#pragma once

// CClientSocket 명령 대상

class CClientSocket : public CSocket
{
public:
	CClientSocket();
	virtual ~CClientSocket();
	virtual void OnReceive(int nErrorCode);
	virtual void OnClose(int nErrorCode);
};



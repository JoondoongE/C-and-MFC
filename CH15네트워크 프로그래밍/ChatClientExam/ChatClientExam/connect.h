#pragma once


// connect 대화 상자

class connect1 : public CDialog
{
	DECLARE_DYNAMIC(connect1)

public:
	connect1(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~connect1();

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_CClientSocket };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedSend();
	afx_msg void OnBnClickedConnect();
};

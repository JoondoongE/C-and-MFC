#pragma once


// ccc 대화 상자

class ccc : public CDialog
{
	DECLARE_DYNAMIC(ccc)

public:
	ccc(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	virtual ~ccc();
	CString m_strAddress;	//IP컨트롤에 입력받은 서버의 IP 주소를 저장할 변수
// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIALOG1 };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	
	BOOL OnInitDialog();
	afx_msg void OnBnClickedOk();
};

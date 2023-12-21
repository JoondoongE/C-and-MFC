// ccc.cpp: 구현 파일
//

#include "pch.h"
#include "ChatClientExam.h"
#include "ccc.h"
#include "afxdialogex.h"


// ccc 대화 상자

IMPLEMENT_DYNAMIC(ccc, CDialog)

ccc::ccc(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_DIALOG1, pParent)
{

}

ccc::~ccc()
{
}

void ccc::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(ccc, CDialog)
	ON_BN_CLICKED(IDOK, &ccc::OnBnClickedOk)
END_MESSAGE_MAP()


// ccc 메시지 처리기
BOOL ccc::OnInitDialog()
{
	CDialog::OnInitDialog();
	SetDlgItemText(IDC_IPADDRESS1, _T("127.0.0.1"));
	return TRUE;
}

void ccc::OnBnClickedOk()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	GetDlgItemText(IDC_IPADDRESS1, m_strAddress);
	CDialog::OnOK();
}

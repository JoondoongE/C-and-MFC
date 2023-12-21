// connect.cpp: 구현 파일
//

#include "pch.h"
#include "ChatClientExam.h"
#include "connect.h"
#include "afxdialogex.h"


// connect 대화 상자

IMPLEMENT_DYNAMIC(connect, CDialog)

connect1::connect1(CWnd* pParent /*=nullptr*/)
	: CDialog(IDD_CClientSocket, pParent)
{

}

connect1::~connect1()
{
}

void connect1::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(connect1, CDialog)
	ON_BN_CLICKED(IDC_SEND, &connect1::OnBnClickedSend)
	ON_BN_CLICKED(IDC_CONNECT, &connect1::OnBnClickedConnect)
END_MESSAGE_MAP()


// connect 메시지 처리기


void connect1::OnBnClickedSend()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CString strData;
	GetDlgItemText(IDC_DATA, strData);
	((CChatClientExamApp*)AfxGetApp())->sendData(strData);
	SetDlgItemText(IDC_DATA, _T("\0"));
}

#include "ccc.h"
void connect1::OnBnClickedConnect()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	ccc dlg;
	dlg.DoModal();
}

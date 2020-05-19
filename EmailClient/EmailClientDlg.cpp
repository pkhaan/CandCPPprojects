// EmailClientDlg.cpp : implementation file
//

#include "stdafx.h"
#include "EmailClient.h"
#include "EmailClientDlg.h"
#include <string>

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	enum { IDD = IDD_ABOUTBOX };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()


// CEmailClientDlg dialog




CEmailClientDlg::CEmailClientDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CEmailClientDlg::IDD, pParent)
    , m_from(_T(""))
    , m_to(_T(""))
    , m_subject(_T(""))
    , m_message(_T(""))
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CEmailClientDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Text(pDX, IDC_FROM, m_from);
    DDX_Text(pDX, IDC_TO, m_to);
    DDX_Text(pDX, IDC_SUBJECT, m_subject);
    DDX_Text(pDX, IDC_MESSAGE, m_message);
}

BEGIN_MESSAGE_MAP(CEmailClientDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
    ON_BN_CLICKED(IDOK, &CEmailClientDlg::OnBnClickedOk)
    ON_BN_CLICKED(IDCANCEL, &CEmailClientDlg::OnBnClickedCancel)
END_MESSAGE_MAP()


// CEmailClientDlg message handlers

BOOL CEmailClientDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

    m_subject = "Hi from softwareandfinance.com";
	m_message = "This is the email client program developed by \r\nwww.softwareandfinance.com\r\n\r\nThanks and Regards,\r\nKathir\r\n\r\nForums: http://forums.softwareandfinance.com\r\n";

    UpdateData(FALSE);

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CEmailClientDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CEmailClientDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CEmailClientDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


bool SendEmail(std::string smtpdomain, std::string fromname, std::string  fromdomain, std::string toname, std::string todomain, std::string subject, std::string message)
{
    SOCKET s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if(s == -1)
    {
        AfxMessageBox("Socket Initialiation Error");
        return false;
    }
    SOCKADDR_IN serveraddr;
    struct hostent *hostentry;

    int portno = 25;
    bool bSent = false;
    
    hostentry = gethostbyname(smtpdomain.c_str());
    char *pipaddr = inet_ntoa (*(struct in_addr *)*hostentry->h_addr_list);


     memset(&serveraddr,0, sizeof(serveraddr));
     serveraddr.sin_family = AF_INET;
     serveraddr.sin_port = htons(portno);
     serveraddr.sin_addr.s_addr = inet_addr(pipaddr);

    //serv_addr.sa_data = htons(portno);

    if (connect(s,(SOCKADDR*)&serveraddr,sizeof(SOCKADDR_IN)) < 0) 
    {
         AfxMessageBox("ERROR connecting to the server");
         exit(1);
    }	

    char sbuf[1024], rbuf[1024];
    
    if(recv(s, rbuf, 1024, 0) > 0)
    {
        if(strnicmp(rbuf, "220", 3) == 0)
        {
            strcpy(sbuf, "helo kathir\r\n");
            if(send(s, sbuf, strlen(sbuf), 0) == strlen(sbuf))
            {
                recv(s, rbuf, 1024, 0);
                if(strnicmp(rbuf, "250", 3) == 0)
                {
                    sprintf(sbuf, "mail from: <%s@%s>\r\n", fromname.c_str(), fromdomain.c_str());
                    send(s, sbuf, strlen(sbuf), 0);
                    recv(s, rbuf, 1024, 0);
                    if(strnicmp(rbuf, "250", 3) == 0)
                    {
                        sprintf(sbuf, "rcpt to: <%s@%s>\r\n", toname.c_str(), todomain.c_str());
                        send(s, sbuf, strlen(sbuf), 0);
                        recv(s, rbuf, 1024, 0);
                        if(strnicmp(rbuf, "250", 3) == 0)
                        {
                            strcpy(sbuf, "data\r\n");
                            send(s, sbuf, strlen(sbuf), 0);
                            recv(s, rbuf, 1024, 0);
                            if(strnicmp(rbuf, "354", 3) == 0)
                            {
                                sprintf(sbuf, "from: %s@%s\r\nto:%s@%s\r\nsubject:%s\r\n\r\n%s\r\n.\r\n", fromname.c_str(), fromdomain.c_str(), toname.c_str(), todomain.c_str(), subject.c_str(), message.c_str());
                                send(s, sbuf, strlen(sbuf), 0);
                                recv(s, rbuf, 1024, 0);
                                if(strnicmp(rbuf, "250", 3) == 0)
                                {
                                    bSent = true;   
                                }
                            }
                        }
                    }
                }
            }
        }
    }

    if(bSent == false)
        AfxMessageBox(rbuf);
    ::closesocket(s);
}

void CEmailClientDlg::OnBnClickedOk()
{
    UpdateData(TRUE);

    int pos = m_from.Find('@');
    if(pos < 0)
    {
        MessageBox("Invalid From Email Address");
        return;
    }
    std::string fromname = m_from.Left(pos);
    std::string fromdomain = m_from.Right(m_from.GetLength() - pos - 1);

    pos = m_to.Find('@');
    if(pos < 0)
    {
        MessageBox("Invalid To Email Address");
        return;
    }
    
    std::string toname = m_to.Left(pos);
    std::string todomain = m_to.Right(m_to.GetLength() - pos - 1);

    std::string smtpdomain;
    if(stricmp(todomain.c_str(), "yahoo.com") == 0)
        smtpdomain = "c.mx.mail.yahoo.com";
    else if(stricmp(todomain.c_str(), "gmail.com") == 0)
        smtpdomain = "alt1.gmail-smtp-in.l.google.com";
    else
    {
        MessageBox("To address should be either yahoo.com or gmail.com");
        return;
    }

    std::string subject = m_subject;
    std::string message = m_message;

    if(SendEmail(smtpdomain, fromname, fromdomain, toname, todomain, subject, message) == true)
        MessageBox("Message has been sent successfully");
    
}

void CEmailClientDlg::OnBnClickedCancel()
{
    ShellExecute(NULL, _T("open"), _T("http://www.softwareandfinance.com"), NULL, NULL, SW_SHOWNORMAL);
    OnCancel();
}

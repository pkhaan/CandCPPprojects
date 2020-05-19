// CShortCutKeyDlg.cpp : implementation file
//

#include "stdafx.h"
#include "CShortCutKey.h"
#include "CShortCutKeyDlg.h"

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


// CCShortCutKeyDlg dialog




CCShortCutKeyDlg::CCShortCutKeyDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CCShortCutKeyDlg::IDD, pParent)
    , m_sel1(0)
    , m_sel2(0)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CCShortCutKeyDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_COMBO1, m_ctrl1);
    DDX_Control(pDX, IDC_COMBO2, m_ctrl2);
    DDX_CBIndex(pDX, IDC_COMBO1, m_sel1);
    DDX_CBIndex(pDX, IDC_COMBO2, m_sel2);
}

BEGIN_MESSAGE_MAP(CCShortCutKeyDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
    ON_BN_CLICKED(IDOK, &CCShortCutKeyDlg::OnBnClickedOk)
    ON_CBN_SELCHANGE(IDC_COMBO1, &CCShortCutKeyDlg::OnCbnSelchangeCombo1)
    ON_CBN_SELCHANGE(IDC_COMBO2, &CCShortCutKeyDlg::OnCbnSelchangeCombo2)
    ON_BN_CLICKED(IDC_BUTTON1, &CCShortCutKeyDlg::OnBnClickedButton1)
    ON_BN_CLICKED(IDC_BUTTON2, &CCShortCutKeyDlg::OnBnClickedButton2)
END_MESSAGE_MAP()


// CCShortCutKeyDlg message handlers

BOOL CCShortCutKeyDlg::OnInitDialog()
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

    m_ctrl1.AddString(L"No Shortcut");
    m_ctrl2.AddString(L"No Shortcut");
    for(int i = 0; i < 10; i++)
    {
        wchar_t buf[12];
        wsprintf(buf, L"F%d", i + 1);
        m_ctrl1.AddString(buf);
        m_ctrl2.AddString(buf);
    }
    m_sel1 = m_sel2 = 0;
    UpdateData(FALSE);
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CCShortCutKeyDlg::OnSysCommand(UINT nID, LPARAM lParam)
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

void CCShortCutKeyDlg::OnPaint()
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
HCURSOR CCShortCutKeyDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}


void CCShortCutKeyDlg::OnBnClickedOk()
{
    // TODO: Add your control notification handler code here
    OnOK();
}

void CCShortCutKeyDlg::OnCbnSelchangeCombo1()
{
    
    UnregisterHotKey( NULL, IDC_BUTTON1);
    UpdateData(TRUE);
    if(RegisterHotKey( NULL, IDC_BUTTON1,  0, 0x70 + (m_sel1 - 1)) == FALSE)
    {
        MessageBox(L"Hot Key is alreday registered");
        m_sel1 = 0;
    }
    UpdateData(FALSE);
}

void CCShortCutKeyDlg::OnCbnSelchangeCombo2()
{
    UnregisterHotKey( NULL, IDC_BUTTON2);
    UpdateData(TRUE);
    if(RegisterHotKey( NULL, IDC_BUTTON2,  0, 0x70 + (m_sel2 - 1)) == FALSE)
    {
        MessageBox(L"Hot Key is alreday registered");
        m_sel2 = 0;
    }
    UpdateData(FALSE);    
}

BOOL CCShortCutKeyDlg::PreTranslateMessage(MSG* pMsg) 
{
    if(pMsg->message == WM_HOTKEY)
    {
        GetDlgItem(pMsg->wParam)->PostMessage(BM_CLICK);
    }
    return CDialog::PreTranslateMessage(pMsg);
}


void CCShortCutKeyDlg::OnBnClickedButton1()
{
    MessageBox(L"Button1 Pressed");
}

void CCShortCutKeyDlg::OnBnClickedButton2()
{
    MessageBox(L"Button2 Pressed");
}

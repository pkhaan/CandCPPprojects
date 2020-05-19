// EmailClientDlg.h : header file
//

#pragma once


// CEmailClientDlg dialog
class CEmailClientDlg : public CDialog
{
// Construction
public:
	CEmailClientDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_EMAILCLIENT_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnBnClickedOk();
    CString m_from;
    CString m_to;
    CString m_subject;
    CString m_message;
    afx_msg void OnBnClickedCancel();
};

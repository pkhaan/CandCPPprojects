// CShortCutKeyDlg.h : header file
//

#pragma once
#include "afxwin.h"


// CCShortCutKeyDlg dialog
class CCShortCutKeyDlg : public CDialog
{
// Construction
public:
	CCShortCutKeyDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	enum { IDD = IDD_CSHORTCUTKEY_DIALOG };

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support


// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
    virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:

    afx_msg void OnBnClickedOk();
    CComboBox m_ctrl1;
    CComboBox m_ctrl2;
    int m_sel1;
    int m_sel2;
    afx_msg void OnCbnSelchangeCombo1();
    afx_msg void OnCbnSelchangeCombo2();
    afx_msg void OnBnClickedButton1();
    afx_msg void OnBnClickedButton2();
};

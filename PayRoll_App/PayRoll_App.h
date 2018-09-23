
// PayRoll_App.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CPayRoll_AppApp:
// See PayRoll_App.cpp for the implementation of this class
//

class CPayRoll_AppApp : public CWinApp
{
public:
	CPayRoll_AppApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CPayRoll_AppApp theApp;
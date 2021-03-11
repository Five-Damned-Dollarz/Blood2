#include "StdAfx.h"
#include "GameSpyMgr.h"

void CGameSpySocket::OnReceive(int nErrorCode) {}

BOOL CGameSpyMgr::Init(const char* sGameName, const char* sGameVer, const char* sGameKey, int nGameLoc, int nGamePort, int nSpyPort, DWORD dwFlags) { return FALSE; }
void CGameSpyMgr::Term() {}

int CGameSpyMgr::Update() { return -1; }

BOOL CGameSpyMgr::OnQuery(CGameSpyQueryInfo* pQueryInfo) { return FALSE; }
BOOL CGameSpyMgr::OnQuery(char* sAddr, DWORD dwPort, char* sData, int nLen) { return FALSE; }
BOOL CGameSpyMgr::OnEchoQuery(const char* sQuery) { return FALSE;}
BOOL CGameSpyMgr::OnSecureQuery(const char* sValue) { return FALSE; }
BOOL CGameSpyMgr::OnBasicQuery() { return FALSE; }
BOOL CGameSpyMgr::OnStatusQuery() { return FALSE; }

void CGameSpyMgr::SendResponseInfo(const char* sKey, const char* sValue) {}
void CGameSpyMgr::SendResponseInfo(const char* sKey, int nValue) {}

void CGameSpyMgr::StartResponse(const char* sAddr, DWORD dwPort) {}
void CGameSpyMgr::SendResponse() {}
void CGameSpyMgr::FlushResponse() {}

void CGameSpyMgr::AddResponseQueryID() {}
BOOL CGameSpyMgr::GetNextQuery(CGameSpyQueryInfo* pQueryInfo) { return FALSE; }
BOOL CGameSpyMgr::UpdateHeartbeat() { return FALSE; }

CString CGameSpyMgr::GetFirstQueryToken(const char* sQuery) { return _T(""); }
CString CGameSpyMgr::GetNextQueryToken() { return _T(""); }

BOOL CGameSpyMgr::SendSocketString(const char* sAddr, DWORD dwPort, const char* sText, int nLength) { return FALSE; }
void CGameSpyMgr::TraceSocketError() {}
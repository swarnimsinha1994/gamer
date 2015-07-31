// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2012 The gamertip developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.
#ifndef gamertip_INIT_H
#define gamertip_INIT_H

#include "wallet.h"

extern CWallet* pwalletMain;

void StartShutdown();
void Shutdown(void* parg);
bool AppInit2();
std::string HelpMessage();

#endif

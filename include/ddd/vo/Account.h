/*
 * Account.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H417BEB0E_F12F_4172_B688_30BD58EE4A04
#define H417BEB0E_F12F_4172_B688_30BD58EE4A04


#include "base/BaseType.h"
#include <string>

struct DDDAccount
{
    DDDAccount(int balance):id(randU32()),balance(balance){}
    WORD32 id;
    int balance;
};


#endif /* H417BEB0E_F12F_4172_B688_30BD58EE4A04 */

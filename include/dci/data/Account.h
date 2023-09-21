/*
 * Account.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HD14BC100_1CC6_4E24_A6A1_130D310C2035
#define HD14BC100_1CC6_4E24_A6A1_130D310C2035


#include "base/BaseType.h"
#include <string>

struct DCIAccount
{
    DCIAccount(int balance):id(randU32()),balance(balance){}
    WORD32 id;
    int balance;
};


#endif /* HD14BC100_1CC6_4E24_A6A1_130D310C2035 */

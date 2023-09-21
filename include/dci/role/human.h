/*
 * human.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HBD3E4AA3_D1AC_493B_B4DB_B797E5C76AAA
#define HBD3E4AA3_D1AC_493B_B4DB_B797E5C76AAA


#include "base/BaseType.h"
#include "dci/data/Account.h"
#include "dci/data/IdentityCard.h"

struct Human{
    Human (string name): identityCard (name), account (10){}
    DCIIdentityCard identityCard;
    DCIAccount account;

    void Sleep() {
        identityCard. dump();
        printf ("sleeping\n" );
    }
    void PlayGame() {
        identityCard.dump();
        printf ("playing game\n");
    }
    void Eat() {
        identityCard.dump();
        printf ("eating\n");
        account.balance--;
    }
};


#endif /* HBD3E4AA3_D1AC_493B_B4DB_B797E5C76AAA */

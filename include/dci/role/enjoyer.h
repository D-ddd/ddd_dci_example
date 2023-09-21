/*
 * enjoyer.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HA39157AA_73FE_4209_BEB3_6934ACD5001B
#define HA39157AA_73FE_4209_BEB3_6934ACD5001B


#include "human.h"
#include "base/Role.h"

DEFINE_ROLE(Enjoyer)
{
    Enjoyer(){}

    void BuyTicket()
    {
        ROLE(Human).identityCard.dump();
        printf("buying a ticket\n");
        ROLE(Human).account.balance--;
    }

    void Enjoy()
    {
        ROLE(Human).identityCard.dump();
        printf(" enjoying scenery\n");
    }

    USE_ROLE(Human);
};


#endif /* HA39157AA_73FE_4209_BEB3_6934ACD5001B */

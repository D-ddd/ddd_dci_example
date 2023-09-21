/*
 * enjoyer_service.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HE52B1283_2CFD_4409_B447_3E18F2A1F3C1
#define HE52B1283_2CFD_4409_B447_3E18F2A1F3C1

#include "ddd/entity/People.h"

struct DDDEnjoyerService
{
    void BuyTicket(DDDPeople* p)
    {
        p->identityCard.dump();
        printf ("buying a ticket\n");
        p->account.balance--;
    }

    void Enjoy(DDDPeople* p)
    {
        p->identityCard.dump();
        printf(" enjoying scenery\n");
    }
};


#endif /* HE52B1283_2CFD_4409_B447_3E18F2A1F3C1 */

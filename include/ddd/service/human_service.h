/*
 * human_service.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HB02223E8_D246_4D40_9266_515A3923EFCE
#define HB02223E8_D246_4D40_9266_515A3923EFCE

#include "ddd/entity/People.h"

struct DDDHumanService
{
    void Eat(DDDPeople* p)
    {
        p->identityCard.dump();
        printf ("eating\n");
        p->account.balance--;
    }

    void Sleep(DDDPeople* p)
    {
        p->identityCard.dump();
        printf(" sleeping\n");
    }

    void PlayGame(DDDPeople* p)
    {
        p->identityCard.dump();
        printf(" playing game\n");
    }
};


#endif /* HB02223E8_D246_4D40_9266_515A3923EFCE */

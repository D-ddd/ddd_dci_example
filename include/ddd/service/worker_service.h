/*
 * worker_service.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H312D4EF4_D51A_4087_817A_D621A95AFC9C
#define H312D4EF4_D51A_4087_817A_D621A95AFC9C


#include "ddd/entity/People.h"

struct DDDWorkerService
{
    void Work(DDDPeople* p)
    {
        p->workCard.dump();
        printf (" working\n");
        p->account.balance++;
    }

    void Exam(DDDPeople* p)
    {
        p->workCard.dump();
        printf(" getting off work\n");
    }
};


#endif /* H312D4EF4_D51A_4087_817A_D621A95AFC9C */

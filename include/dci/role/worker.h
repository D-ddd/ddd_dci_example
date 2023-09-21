/*
 * worker.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H9CD5941C_98DA_4B2D_87D3_A3FD6CF36B26
#define H9CD5941C_98DA_4B2D_87D3_A3FD6CF36B26


#include "dci/data/WorkCard.h"
#include "human.h"
#include "base/Role.h"

DEFINE_ROLE(Worker)
{
    Worker(string name):workCard(name){}
    DCIWorkCard workCard;

    void Work()
    {
        workCard.dump();
        printf(" working\n");
        ROLE(Human).account.balance++;
    }

    void OffWork()
    {
        workCard.dump();
        printf(" getting off work\n");
    }

    USE_ROLE(Human);
};


#endif /* H9CD5941C_98DA_4B2D_87D3_A3FD6CF36B26 */

/*
 * IdentityCard.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HED630230_A396_4421_B6C3_83ACA0CE2B5C
#define HED630230_A396_4421_B6C3_83ACA0CE2B5C

#include "base/BaseType.h"

struct DDDIdentityCard
{
    DDDIdentityCard(string name):id(randU32()),name(name){}
    WORD32 id;
    string name;

    void dump()
    {
        printf("people{id:%u, name:%s} ", id, name.c_str());
    }

};


#endif /* HED630230_A396_4421_B6C3_83ACA0CE2B5C */

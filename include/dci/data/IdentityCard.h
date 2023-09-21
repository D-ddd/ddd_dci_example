/*
 * IdentityCard.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H1679A248_5D37_43B6_A791_F13C0BE11B3C
#define H1679A248_5D37_43B6_A791_F13C0BE11B3C


#include "base/BaseType.h"

struct DCIIdentityCard
{
    DCIIdentityCard(string name):id(randU32()),name(name){}
    WORD32 id;
    string name;

    void dump()
    {
        printf("people{id:%u, name:%s} ", id, name.c_str());
    }
};


#endif /* H1679A248_5D37_43B6_A791_F13C0BE11B3C */

/*
 * Home.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H6134CA89_6F60_4778_91D1_40F50FCE3C6A
#define H6134CA89_6F60_4778_91D1_40F50FCE3C6A


#include "ddd/entity/People.h"
#include "base/BaseType.h"


struct DDDHome
{
    DDDHome() : me(nullptr){}
    DDDPeople* me;

    void ComeBack(DDDPeople* p)
    {
        me = p;
        me->identityCard.dump();
        printf(" come back home\n");
    }

    void Run()
    {
        me->Eat();
        me->PlayGame();
        me->Sleep();
    }
};


#endif /* H6134CA89_6F60_4778_91D1_40F50FCE3C6A */

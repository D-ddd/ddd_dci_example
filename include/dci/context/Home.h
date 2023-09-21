/*
 * Home.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HEC5097E4_4D89_48F1_9493_36E2551E506D
#define HEC5097E4_4D89_48F1_9493_36E2551E506D


#include "dci/role/human.h"
#include "base/BaseType.h"


struct DCIHome
{
    DCIHome() : me(nullptr){}
    Human* me;

    void ComeBack(Human* p)
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


#endif /* HEC5097E4_4D89_48F1_9493_36E2551E506D */

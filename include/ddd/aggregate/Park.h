/*
 * Park.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H8B842356_3A0F_4ED6_A48D_9ADE8FB8C066
#define H8B842356_3A0F_4ED6_A48D_9ADE8FB8C066


#include "ddd/entity/People.h"
#include "base/BaseType.h"

struct DDDPark
{
    DDDPark(string name) :parkName(name){}
    string parkName;
    vector<DDDPeople*> enjoyers;

    void Welcome(DDDPeople* enjoyer)
    {
        enjoyer->identityCard.dump();
        printf(" come to park %s\n", parkName.c_str());
        enjoyers.push_back(enjoyer);
    }

    void Run()
    {
        printf("%s start to sell tickets\n", parkName.c_str());
        for(auto enjoyer : enjoyers)
        {
            enjoyer->BuyTicket();
        }
        printf("%s start a show\n",parkName.c_str());
        for(auto enjoyer : enjoyers)
        {
            enjoyer->Enjoy();
        }
        printf("show finish\n");
    }
};



#endif /* H8B842356_3A0F_4ED6_A48D_9ADE8FB8C066 */

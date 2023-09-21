/*
 * Park.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HDF49CD91_548F_4316_8CC4_6D75167459E8
#define HDF49CD91_548F_4316_8CC4_6D75167459E8


#include "base/BaseType.h"
#include "dci/role/human.h"
#include "dci/role/enjoyer.h"

struct DCIPark
{
    DCIPark(string name) :parkName(name){}
    string parkName;
    vector<Enjoyer*> enjoyers;

    void Welcome(Enjoyer* enjoyer)
    {
        enjoyer->ROLE(Human).identityCard.dump();
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
        printf("%s start a dinner\n", parkName.c_str());
       for(auto enjoyer : enjoyers)
        {
           enjoyer->ROLE(Human).Eat();
        }
        printf("%s start a show\n",parkName.c_str());
        for(auto enjoyer : enjoyers)
        {
            enjoyer->Enjoy();
        }
        printf("show finish\n");
    }
};


#endif /* HDF49CD91_548F_4316_8CC4_6D75167459E8 */

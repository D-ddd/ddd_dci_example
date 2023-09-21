/*
 * WorkCard.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HF2BBFC55_B594_4B39_A9EF_631A240B164A
#define HF2BBFC55_B594_4B39_A9EF_631A240B164A


#include "base/BaseType.h"

struct DCIWorkCard
{
    DCIWorkCard(string name, string company=""):id(0),name(name),company(company){}
    WORD32 id;
    string name;
    string company;

    void dump()
    {
        printf("worker{id:%u, name:%s, company:%s} ", id, name.c_str(), company.c_str());
    }

};


#endif /* HF2BBFC55_B594_4B39_A9EF_631A240B164A */

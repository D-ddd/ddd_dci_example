/*
 * WorkCard.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H3F68E784_7177_42AC_95AE_C9C101B2EB44
#define H3F68E784_7177_42AC_95AE_C9C101B2EB44


#include "base/BaseType.h"

struct DDDWorkCard
{
    DDDWorkCard(string name, string company=""):id(0),name(name),company(company){}
    WORD32 id;
    string name;
    string company;

    void dump()
    {
        printf("worker{id:%u, name:%s, company:%s} ", id, name.c_str(), company.c_str());
    }

};


#endif /* H3F68E784_7177_42AC_95AE_C9C101B2EB44 */

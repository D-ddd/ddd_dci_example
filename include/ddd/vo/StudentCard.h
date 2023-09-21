/*
 * StudentCard.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HB44BF062_DFBF_41BB_9EF8_E12BBF260200
#define HB44BF062_DFBF_41BB_9EF8_E12BBF260200


#include "base/BaseType.h"

struct DDDStudentCard
{
    DDDStudentCard(string name, string school=""):id(0),name(name),school(school){}
    WORD32 id;
    string name;
    string school;

    void dump()
    {
        printf("student{id:%u, name:%s, school:%s} ", id, name.c_str(), school.c_str());
    }

};

#endif /* HB44BF062_DFBF_41BB_9EF8_E12BBF260200 */

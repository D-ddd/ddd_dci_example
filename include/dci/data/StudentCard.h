/*
 * StudentCard.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HEE327D67_6787_4A66_A4E3_224B9319796A
#define HEE327D67_6787_4A66_A4E3_224B9319796A


#include "base/BaseType.h"

struct DCIStudentCard
{
    DCIStudentCard(string name, string school=""):id(0),name(name),school(school){}
    WORD32 id;
    string name;
    string school;

    void dump()
    {
        printf("student{id:%u, name:%s, school:%s} ", id, name.c_str(), school.c_str());
    }

};


#endif /* HEE327D67_6787_4A66_A4E3_224B9319796A */

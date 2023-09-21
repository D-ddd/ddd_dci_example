/*
 * student.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H8F1017FD_A1EA_4BF3_A5A9_DCCBFAC3B83E
#define H8F1017FD_A1EA_4BF3_A5A9_DCCBFAC3B83E

#include "dci/data/StudentCard.h"
#include "human.h"
#include "base/Role.h"

DEFINE_ROLE(Student)
{
    Student(string name):studentCard(name){}
    DCIStudentCard studentCard;

    void Study()
    {
        studentCard.dump();
        printf(" studying\n");
    }

    void Exam()
    {
        studentCard.dump();
        printf(" examing\n");
    }

    USE_ROLE(Human);
};


#endif /* H8F1017FD_A1EA_4BF3_A5A9_DCCBFAC3B83E */

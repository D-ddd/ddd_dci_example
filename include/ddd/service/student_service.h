/*
 * student_service.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H3078B166_014F_4664_ACE7_80E14009E4BD
#define H3078B166_014F_4664_ACE7_80E14009E4BD


#include "ddd/entity/People.h"

struct DDDStudentService
{
    void Study(DDDPeople* p)
    {
        p->studentCard.dump();
        printf (" studying\n");
    }

    void Exam(DDDPeople* p)
    {
        p->studentCard.dump();
        printf(" examing\n");
    }
};


#endif /* H3078B166_014F_4664_ACE7_80E14009E4BD */

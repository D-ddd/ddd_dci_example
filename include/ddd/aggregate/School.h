/*
 * School.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H7F131CFD_0FF4_4177_A4FB_418C7F644A92
#define H7F131CFD_0FF4_4177_A4FB_418C7F644A92


#include "ddd/entity/People.h"
#include "base/BaseType.h"

struct DDDSchool
{
    DDDSchool(string name) :schoolName(name){}
    string schoolName;
    vector<DDDPeople*> students;;

    void Receive(DDDPeople* student)
    {
        student->studentCard.id = randU32();
        student->studentCard.name = student->identityCard.name;
        student->studentCard.school = schoolName;

        students.push_back(student);
        printf("%s Receive student \n", schoolName.c_str());
        student->studentCard.dump();
        printf(" \n");
    }

    void Run()
    {
        printf("%s start class\n", schoolName.c_str());
        for(auto student : students)
        {
            student->Study();
        }
        printf("students start to eating\n");
        for(auto student : students)
        {
            student->Eat();
        }
        printf("students start to exam\n");
        for(auto student : students)
        {
            student->Exam();
        }
        printf("%s finish class\n", schoolName.c_str());
    }
};


#endif /* H7F131CFD_0FF4_4177_A4FB_418C7F644A92 */

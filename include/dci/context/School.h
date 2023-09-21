/*
 * School.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HC20EF87D_A89F_4B8A_A9C9_4D35B6FBFB9E
#define HC20EF87D_A89F_4B8A_A9C9_4D35B6FBFB9E


#include "base/BaseType.h"
#include "dci/role/human.h"
#include "dci/role/student.h"

struct DCISchool
{
    DCISchool(string name) :schoolName(name){}
    string schoolName;
    vector<Student*> students;;

    void Receive(Student* student)
    {
        student->studentCard.id = randU32();
        student->studentCard.name = student->ROLE(Human).identityCard.name;
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
            student->ROLE(Human).Eat();
        }
        printf("students start to exam\n");
        for(auto student : students)
        {
            student->Exam();
        }
        printf("%s finish class\n", schoolName.c_str());
    }
};


#endif /* HC20EF87D_A89F_4B8A_A9C9_4D35B6FBFB9E */

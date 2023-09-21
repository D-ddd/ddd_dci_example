/*
 * FtDDD.cpp
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */


#include "gtest/gtest.h"
#include<stdio.h>
#include<stdlib.h>

#include "ddd/entity/People.h"
#include "ddd/aggregate/School.h"
#include "ddd/aggregate/Company.h"
#include "ddd/aggregate/Home.h"
#include "ddd/aggregate/Park.h"

struct FtDDD: testing::Test
{
    void DDD()
    {
        DDDPeople* paul = new DDDPeople{"Paul"};
        DDDSchool* mit = new DDDSchool{"MIT"};
        DDDCompany* zte = new DDDCompany{"Zte"};
        DDDHome* home = new DDDHome{};
        DDDPark* summerPalace = new DDDPark{"Summer Palace"};

        // 上学
        mit->Receive(paul);
        mit->Run();
        // 回家
        home->ComeBack(paul);
        home->Run();
        // 工作
        zte->Employ(paul);
        zte->Run();
        // 公园游玩
        summerPalace->Welcome(paul);
        summerPalace->Run();

        delete paul;
        delete mit;
        delete zte;
        delete home;
        delete summerPalace;
    }
};

TEST_F(FtDDD, use_ddd_architechture)
{
    DDD();
}

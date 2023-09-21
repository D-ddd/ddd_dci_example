/*
 * FtDCI.cpp
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#include "gtest/gtest.h"
#include<stdio.h>
#include<stdlib.h>

#include "dci/object/People.h"
#include "dci/context/School.h"
#include "dci/context/Company.h"
#include "dci/context/Home.h"
#include "dci/context/Park.h"

struct FtDCI: testing::Test
{
    void DCI()
    {
        DCIPeople* paul = new DCIPeople{"Paul"};
        DCISchool* mit = new DCISchool{"MIT"};
        DCICompany* zte = new DCICompany{"Zte"};
        DCIHome* home = new DCIHome{};
        DCIPark* summerPalace = new DCIPark{"Summer Palace"};

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

TEST_F(FtDCI, use_dci_architechture)
{
    DCI();
}



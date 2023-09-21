/*
 * Company.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HC67D8228_5173_4A25_B244_708575EC68E2
#define HC67D8228_5173_4A25_B244_708575EC68E2


#include "base/Role.h"
#include "dci/role/worker.h"
#include "dci/role/human.h"


// xxxAction
struct DCICompany
{
    DCICompany(string name) :companyName(name){}
    string companyName;
    vector<Worker*> workers;

    void Employ(Worker* worker)
    {
        worker->workCard.id = randU32();
        worker->workCard.name = worker->ROLE(Human).identityCard.name;
        worker->workCard.company = companyName;

        workers.push_back(worker);
        printf("%s Employ worker \n", companyName.c_str());
        worker->workCard.dump();
        printf(" \n");
    }

    // exec()
    void Run()
    {
        printf("%s start work\n", companyName.c_str());
        for(auto worker : workers)
        {
            worker->Work();
        }
        printf("worker start to eating\n");
        for(auto worker : workers)
        {
            worker->ROLE(Human).Eat();
        }
        printf("worker get off work\n");
        for(auto worker : workers)
        {
            worker->OffWork();
        }
        printf("%s finish work\n", companyName.c_str());
    }
};


#endif /* HC67D8228_5173_4A25_B244_708575EC68E2 */

/*
 * Company.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HA5D3CFBC_A8F7_44A3_82C2_1463F8FD47F2
#define HA5D3CFBC_A8F7_44A3_82C2_1463F8FD47F2


#include "ddd/entity/People.h"
#include "base/BaseType.h"

struct DDDCompany
{
    DDDCompany(string name) :companyName(name){}
    string companyName;
    vector<DDDPeople*> workers;

    void Employ(DDDPeople* worker)
    {
        worker->workCard.id = randU32();
        worker->workCard.name = worker->identityCard.name;
        worker->workCard.company = companyName;

        workers.push_back(worker);
        printf("%s Employ worker \n", companyName.c_str());
        worker->workCard.dump();
        printf(" \n");
    }

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
            worker->Eat();
        }
        printf("worker get off work\n");
        for(auto worker : workers)
        {
            worker->OffWork();
        }
        printf("%s finish work\n", companyName.c_str());
    }
};


#endif /* HA5D3CFBC_A8F7_44A3_82C2_1463F8FD47F2 */

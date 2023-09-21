/*
 * People.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef H040BC03E_A15D_4F86_BD47_632122CDD075
#define H040BC03E_A15D_4F86_BD47_632122CDD075

#include "dci/role/human.h"
#include "dci/role/student.h"
#include "dci/role/worker.h"
#include "dci/role/enjoyer.h"

struct DCIPeople : Human, Student, Worker, Enjoyer
{
    DCIPeople(string name):Human(name),Student(name),Worker(name),Enjoyer(){}

    IMPL_ROLE(Human);
};

#endif /* H040BC03E_A15D_4F86_BD47_632122CDD075 */

/*
 * People.h
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */

#ifndef HB17DE7A7_4B00_4FF7_9976_EFB45339EC08
#define HB17DE7A7_4B00_4FF7_9976_EFB45339EC08

#include "ddd/vo/Account.h"
#include "ddd/vo/IdentityCard.h"
#include "ddd/vo/StudentCard.h"
#include "ddd/vo/WorkCard.h"
#include <string>

using namespace std;

struct DDDPeople{
    DDDPeople (string name, string school="", string company=""):
           identityCard(name) ,studentCard(name, school), workCard(name, company), account(10){}

    DDDIdentityCard identityCard;
    DDDStudentCard studentCard;
    DDDWorkCard workCard;
    DDDAccount account;

    void Study ();
    void Exam();
    void Sleep();
    void PlayGame ();
    void OffWork();
    void Eat();
    void Work();
    void BuyTicket();
    void Enjoy ();
};



#endif /* HB17DE7A7_4B00_4FF7_9976_EFB45339EC08 */

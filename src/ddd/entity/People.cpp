/*
 * People.cpp
 *
 *  Created on: 2023年9月20日
 *      Author: dcq
 */


#include "ddd/entity/People.h"

void DDDPeople::Study() {
    studentCard.dump();
    printf("studying\n");
}
void DDDPeople::Exam() {
    studentCard.dump();
    printf("examing\n");
}

void DDDPeople::Sleep() {
    identityCard.dump();
    printf("sleeping\n");
}
void DDDPeople::PlayGame() {
    identityCard.dump();
    printf("playing game\n");
}
void DDDPeople::OffWork() {
    workCard.dump();
    printf("getting off work\n");
}
void DDDPeople::Eat() {
    identityCard.dump();
    printf("eating\n");
    account.balance--;
}

void DDDPeople::Work() {
    workCard.dump();
    printf("working\n");
    account.balance++;
}

void DDDPeople::BuyTicket() {
    identityCard.dump();
    printf("buying a ticket\n");
    account.balance--;
}

void DDDPeople::Enjoy() {
    identityCard.dump();
    printf(" enjoying scenery\n");
}

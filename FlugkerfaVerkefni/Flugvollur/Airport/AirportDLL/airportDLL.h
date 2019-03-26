//
// Created by rober on 3/15/2019.
//
#include <string>
#include "airportNode.h"

#ifndef FLUGVOLLUR_AIRPORTDLL_H
#define FLUGVOLLUR_AIRPORTDLL_H

class AirportDLL{
private:
    AirportNode* head;
    int nextId;
public:
    AirportDLL();

    int push(string, string, string);
    int getNextId();
    int dele(int);
    AirportNode* getHead();
    void printAll();

};

#endif //FLUGVOLLUR_AIRPORTDLL_H

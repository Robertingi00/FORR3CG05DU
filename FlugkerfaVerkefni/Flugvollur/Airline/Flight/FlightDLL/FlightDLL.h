//
// Created by rober on 3/17/2019.
//

#include "flightNode.h"

#ifndef FLUGVOLLUR_FLIGHTDLL_H
#define FLUGVOLLUR_FLIGHTDLL_H

class FlightDLL{
private:
    FlightNode* head;
    int nextId;
public:
    FlightDLL();

    int push();
    int dele();

    int createFlight(string, Airport *, Airport *, Airplane *, string, int, int, int, string, int, int, int);

    void print();

    int getNextId();
};

#endif //FLUGVOLLUR_FLIGHTDLL_H

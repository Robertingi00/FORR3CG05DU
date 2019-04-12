//
// Created by rober on 3/28/2019.
//

#include <string>

#include "../../Airport/airport.h"
#include "../../Factory/Airplane/airplane.h"
#include "airlineNodeDLL.h"

#ifndef FLUGVOLLUR_AIRLINEDLL_H
#define FLUGVOLLUR_AIRLINEDLL_H

class AirlineDLL{
private:
    AirlineNodeDLL* head;
    int nextId;
public:
    AirlineDLL();

    int push(string, string);
    int dele();
    //string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear
    int makeFlight(string, Airport*, Airport*, Airplane*, string, int, int, int, string, int, int, int);

    void print();

    int getNextId();
};

#endif //FLUGVOLLUR_AIRLINEDLL_H

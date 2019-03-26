//
// Created by rober on 3/16/2019.
//

#include <string>
#include "../../Airport/airport.h"
#include "../../Factory/Airplane/airplane.h"
#include "../../TimeDate/timeDate.h"

#ifndef FLUGVOLLUR_FLIGHT_H
#define FLUGVOLLUR_FLIGHT_H

using namespace std;

class Flight{
private:
    int id;
    string airCode;
    Airport* airportTo;
    Airport* airportFrom;
    Airplane* airplane;
    TimeDate* depTime;
    TimeDate* arrTime;



public:
    Flight(int, string, Airport*, Airport*, Airplane*, string, int, int, int, string, int, int, int);

    void print();
};

#endif //FLUGVOLLUR_FLIGHT_H

//
// Created by rober on 3/28/2019.
//

#include <vector>
#include <string>
#include "../Factory/Airplane/airplane.h"
#include "Flight/FlightDLL/flightDLL.h"

using namespace std;

#ifndef FLUGVOLLUR_AIRLINE_H
#define FLUGVOLLUR_AIRLINE_H

class Airline{
private:
    int id;
    string name;
    string country;
    FlightDLL* flights;
    vector<Airplane*> airplanes;
public:
    Airline(int, string, string);

    void print();

    int getId();
    string getName();

};
#endif //FLUGVOLLUR_AIRLINE_H

//
// Created by rober on 3/10/2019.
//

#ifndef FLUGVOLLUR_FACTORY_H
#define FLUGVOLLUR_FACTORY_H
#include <string>
#include "Airplane/AirplaneDLL/airplaneDLL.h"
using namespace std;

class Factory{
private:
    int id;
    string name;
    string country;
    AirplaneDLL* flightFleet;
    //planeDLL
public:
    Factory(int,string, string);
    void print();

    string getName();
    int getId();
    AirplaneDLL* getFLeet();
};

#endif //FLUGVOLLUR_FACTORY_H

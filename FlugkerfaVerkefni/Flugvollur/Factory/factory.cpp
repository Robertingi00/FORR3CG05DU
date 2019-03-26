//
// Created by rober on 3/10/2019.
//

#include "Airplane/AirplaneDLL/airplaneDLL.h"
#include "factory.h"
#include <string>
#include <iostream>

using namespace std;


Factory::Factory(int id, string name, string country) {
    this->id = id;
    this->name = name;
    this->country = country;
    this->flightFleet = new AirplaneDLL();
};

void Factory::print() {
    cout << "Name: " << name;
}


string Factory::getName(){return name;};
int Factory::getId(){return id;};

AirplaneDLL* Factory::getFLeet() {return flightFleet;};
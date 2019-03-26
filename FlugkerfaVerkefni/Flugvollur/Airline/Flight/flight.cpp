//
// Created by rober on 3/16/2019.
//
#include <string>
#include <iostream>
#include "flight.h"

using namespace std;

Flight::Flight(int id, string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear) {
    this->id = id;
    this->airCode = airCode;
    this->airportTo = airportTo;
    this->airportFrom = airportFrom;
    this->airplane = airplane;
    this->depTime = new TimeDate(depTime, depDay, depMonth, depYear);
    this->arrTime = new TimeDate(arrTime, arrDay, arrMonth, arrYear);
}

void Flight::print(){
    cout << "| " << id << "| " <<  airCode << "| " << airportTo->getName() << "| " << airportFrom->getName() << "| " << airplane->getName() << "| " << depTime->getTime() << "| " << arrTime->getTime() << "|" << endl;
}
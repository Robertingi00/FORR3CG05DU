//
// Created by rober on 3/17/2019.
//
#include <iostream>

#include "flightDLL.h"
#include "flightNode.h"

using namespace std;

FlightDLL::FlightDLL() {
    this->head = nullptr;
    this->nextId = 1;
}

/*
int FlightDLL::dele() {

}
*/

int FlightDLL::createFlight(string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear) {
    if(head){
        head->createFlight(getNextId(), airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear);
    }else{
        head = new FlightNode(getNextId(), airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear);
    }
}

void FlightDLL::print() {
    if(head){
        head->print();
    }else{
        cout << "Ekkert flight er skráð" << endl;
    }

}

int FlightDLL::getNextId(){return nextId ++;};


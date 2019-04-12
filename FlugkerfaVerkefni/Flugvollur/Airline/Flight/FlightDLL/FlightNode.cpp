//
// Created by rober on 3/17/2019.
//

#include <string>
#include <iostream>

#include "flightNode.h"
#include "../flight.h"

using namespace std;

FlightNode::FlightNode(int id, string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear) {
    this->data = new Flight(id, airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear);
    this->prev = nullptr;
    this->next = nullptr;
}

FlightNode::FlightNode(int id, string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear, FlightNode* prev) {
    this->data = new Flight(id, airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear);
    this->prev = prev;
    this->next = nullptr;
}

FlightNode::FlightNode(int id, string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear, FlightNode* prev, FlightNode* next) {
    this->data = new Flight(id, airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear);
    this->prev = prev;
    this->next = next;
}

int FlightNode::createFlight(int id, string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear) {
    if(next){
        next->createFlight(id, airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear);
    }else{
        next = new FlightNode(id, airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear, this);
    }
}


void FlightNode::print() {
    data->print();
    if(next){
        next->print();
    }
}


Flight* FlightNode::getData(){return data;};
FlightNode* FlightNode::getNext(){return next;};
FlightNode* FlightNode::getPrev(){return prev;};
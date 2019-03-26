//
// Created by rober on 3/17/2019.
//

#include <string>

#include "FlightNode.h"
#include "../flight.h"


FlightNode::FlightNode(int id, string airCode, Airport* airportTo, Airport* airportFrom, Airplane* airplane, string depTime, int depDay, int depMonth, int depYear, string arrTime, int arrDay, int arrMonth, int arrYear, FlightNode* prev, FlightNode* next) {
    this->data = new Flight(id, airCode, airportTo, airportFrom, airplane, depTime, depDay, depMonth, depYear, arrTime, arrDay, arrMonth, arrYear);
    this->prev = prev;
    this->next = next;
}



Flight* FlightNode::getData(){return data}
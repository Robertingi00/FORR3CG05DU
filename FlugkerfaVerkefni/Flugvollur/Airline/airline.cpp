//
// Created by rober on 3/28/2019.
//

#include <iostream>

#include "airline.h"

using namespace std;

Airline::Airline(int id, string name, string country) {
    this->id = id;
    this->name = name;
    this->country = country;
    this->flights = new FlightDLL();
}

void Airline::print() {
    cout << "Id: " << id << ", Name: " << name << endl;
}

string Airline::getName(){return name;};
int Airline::getId(){return id;};
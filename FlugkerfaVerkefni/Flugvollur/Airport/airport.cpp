//
// Created by rober on 3/15/2019.
//

#include <string>
#include <iostream>
#include "airport.h"

using namespace std;

Airport::Airport(int id, string name, string code, string country) {
    this->id = id;
    this->name = name;
    this->code = code;
    this->country = country;
};


void Airport::print(){cout << "Name: " << name << " Country: " << country << " Code: "  << code << endl;};
string Airport::getName(){ return name;};
string Airport::getCode(){ return code;};
int Airport::getId() { return id;};
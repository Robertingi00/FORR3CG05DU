//
// Created by rober on 3/14/2019.
//

#include "airplane.h"
#include "../factory.h"
#include <iostream>
#include <string>

using namespace std;

Airplane::Airplane(int id, string model,string name, int capacity) {
    this->id = id;
    this->model = model;
    this->name = name;
    this->capacity = capacity;
};

void Airplane::print() {
    cout << "Name: " << name;
};


int Airplane::getId(){return id;};
string Airplane::getName(){return name;};
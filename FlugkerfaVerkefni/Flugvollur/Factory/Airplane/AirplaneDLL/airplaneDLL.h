//
// Created by rober on 3/14/2019.
//
#include <string>
#include "airplaneNode.h"



#ifndef FLUGVOLLUR_AIRPLANEDLL_H
#define FLUGVOLLUR_AIRPLANEDLL_H

class AirplaneDLL{
private:
    AirplaneNode* head;
    int nextId;
public:
    AirplaneDLL();

    int push(string, string, int);
    int dele(int);

    void printAll();
    int getNextId();
};

#endif //FLUGVOLLUR_AIRPLANEDLL_H

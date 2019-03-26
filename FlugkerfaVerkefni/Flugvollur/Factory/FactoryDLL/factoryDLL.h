//
// Created by rober on 3/10/2019.
//

#ifndef FLUGVOLLUR_FACTORYDLL_H
#define FLUGVOLLUR_FACTORYDLL_H
#include <string>
#include "factoryNode.h"

using namespace std;

class FactoryDLL{
private:
    FactoryNode* head;
    int nextId;
public:
    FactoryDLL();
    int push(string, string);
    int getNextId();
    int dele(int);
    void printAll();
    int makePlane(string, string, int);

    FactoryNode* getHead();
};

#endif //FLUGVOLLUR_FACTORYDLL_H

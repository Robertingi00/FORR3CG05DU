//
// Created by rober on 3/10/2019.
//

#ifndef FLUGVOLLUR_FACTORYNODE_H
#define FLUGVOLLUR_FACTORYNODE_H
#include <string>
#include "../factory.h"

class FactoryNode{
private:
    Factory* data;
    FactoryNode* prev;
    FactoryNode* next;
    int nextPlaneId;
public:
    FactoryNode(int, string, string);
    FactoryNode(int, string, string, FactoryNode*);
    FactoryNode(int, string, string, FactoryNode*, FactoryNode*);
    int push(int id, string name, string country);
    int dele(int);
    void print();

    int makePlane(string, string, int);

    Factory* getData();
    FactoryNode* getNext();
    FactoryNode* getprev();
    int setNext(FactoryNode*);
    int setPrev(FactoryNode*);

};

#endif //FLUGVOLLUR_FACTORYNODE_H

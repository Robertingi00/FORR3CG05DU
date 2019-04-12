//
// Created by rober on 4/8/2019.
//

#include <string>

using namespace std;

#ifndef SKILAVERKEFNI2_PROJECTORS_H
#define SKILAVERKEFNI2_PROJECTORS_H

class Projectors{
private:
    string id;
    int resolutionX;
    int resolutionY;
    int brightness;
    int sharpness;
    float sizeLength;
    float sizeWidth;
    float sizeHeight;
public:
    Projectors(string, int, int, int, int, float, float, float);

    int calculate();

    string getId();
    int getResolutionX();
    int getResolutionY();
    int getBrightness();
    int getSharpness();
    float getSizeLength();
    float getSizeWidth();
    float getSizeHeight();


    //Operator overload

    bool operator==(Projectors &proj){
        return  this->calculate() == proj.calculate();
    }

    bool operator!=(Projectors& proj){
        return  !(*this == proj);
    }

    bool operator>=(Projectors& proj){
        return  !(*this < proj);
    }

    bool operator<=(Projectors& proj){
        return  !(*this > proj);
    }

    bool operator<(Projectors& proj){
        return  this->calculate() < proj.calculate();
    }

    bool operator>(Projectors& proj) {
        return !(*this < proj);
    }
};

#endif //SKILAVERKEFNI2_PROJECTORS_H

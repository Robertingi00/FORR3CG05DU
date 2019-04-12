//
// Created by rober on 4/8/2019.
//

#include <string>

#include "projectors.h"

using namespace std;

Projectors::Projectors(string id, int resolutionX, int resolutionY, int brightness, int sharpness, float sizeLength, float sizeWidth, float sizeHeight) {
    this->id = id;
    this->resolutionX = resolutionX;
    this->resolutionY = resolutionY;
    this->brightness = brightness;
    this->sharpness = sharpness;
    this->sizeLength = sizeLength;
    this->sizeWidth = sizeWidth;
    this->sizeHeight = sizeHeight;
}

int Projectors::calculate() {
    return this->resolutionX * this->resolutionY * this->brightness;
}


string Projectors::getId() { return id;};
int Projectors::getResolutionX(){return resolutionX;};
int Projectors::getResolutionY(){return resolutionY;};
int Projectors::getBrightness(){return brightness;};
int Projectors::getSharpness(){return sharpness;};
float Projectors::getSizeLength(){return sizeLength;};
float Projectors::getSizeWidth(){return sizeWidth;};
float Projectors::getSizeHeight(){return sizeHeight;};
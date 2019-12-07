#pragma once

#include "ofMain.h"

class Bug
{
public:
    Bug();
    
    void draw() const;
    
    int numLegs = 4;
    int numEyes = 2;
    int numBody = 2;
    float bodySize;
    
    ofColor bodyColor = ofColor::green;
    ofColor eyeColor = ofColor::black;

};



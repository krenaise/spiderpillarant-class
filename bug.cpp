
#include "bug.h"

Bug::Bug()
{
    bodyColor = ofColor(0,255,ofRandom(255));
    
    bodySize = ofRandom(20,80);
}

void Bug::draw() const
{
    ofFill();
    ofSetColor(eyeColor);
    ofSetLineWidth(3);
    ofDrawLine(0,-90,0,90);
    
    ofSetColor(bodyColor);
    ofDrawCircle(0,0,bodySize);
    
    ofPushMatrix();
    
    ofTranslate(bodySize,0);
    
    ofSetColor(eyeColor);
    ofSetLineWidth(3);
     ofDrawLine(0,-90,0,90);
     
     ofSetColor(bodyColor);
     ofDrawCircle(0,0,bodySize);
    
    ofPopMatrix();
    

}

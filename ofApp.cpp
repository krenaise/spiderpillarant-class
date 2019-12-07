#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetCircleResolution(64);
}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofPushMatrix();
    ofTranslate(ofGetWidth()/2, ofGetHeight()/2);
    myBug.draw();
    ofPopMatrix();
    
}


#pragma once

#include "ofMain.h"
#include "bug.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

    Bug myBug;
};

//
//  Cammy.hpp
//  3DMagic
//
//  Created by Ingo Raschka on 7/29/19.
//

#ifndef Cammy_h
#define Cammy_h

#include <stdio.h>
#include "ofMain.h"

#endif /* Cammy_h */

// graphics library math

class Cammy
{
public:
	void setup();
	void update();
	void draw();
public:
	void Jump();
public:
	bool onGround = true;
	float speed = 2.0;
	float jumpHeight = 55.5f;
	ofEasyCam ezcam;
	ofNode node;
	ofNode tilt;
	glm::vec3 direction = {0.0f,0.0f,0.0f};
private:
	int oldMouseX, oldMouseY;
	int camBodySize = 10;
	
};

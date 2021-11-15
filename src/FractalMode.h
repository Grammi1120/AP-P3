#pragma once
#include<cmath>
#include "ofMain.h"


class FractalMode{
	protected:
		int x, y, n;
		vector<ofColor> color;
		
	public:
		FractalMode();
		int getN() {return n;};
		void setN(int n) {this->n=n;};
		virtual void draw()=0;
};
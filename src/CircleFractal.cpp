#include "CircleFractal.h"

CircleFractal::CircleFractal()
{
    x=ofGetWidth()/2;
    y=ofGetHeight()/2;
    n=4;
}
void CircleFractal::draw()
{
    pinta(x, y, n);
}
void CircleFractal::pinta(int x, int y, int n){
    if(n==0){ return; }
    ofEnableDepthTest();
    ofSetColor(color[n]);
    ofDrawEllipse(x, y, n, ofGetWidth()/16, ofGetHeight()/4);
    ofDisableDepthTest();
    pinta(x + 100, y, n - 1);
    pinta(x - 100, y, n - 1);
    pinta(x, y + 100, n - 1);
    pinta(x, y - 100, n - 1);
}
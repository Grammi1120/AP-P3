#include "NewFractal.h"

NewFractal::NewFractal()
{
    x=ofGetWidth()/2;
    y=ofGetHeight()/2;
    n=4;
}
void NewFractal::draw()
{
    pinta(x, y, n);
}
void NewFractal::pinta(int x, int y, int n){
    if(n==0){ return; }
    ofEnableDepthTest();
    ofSetColor(color[n]);
    int r=200;
    ofDrawCircle(x, y, n, r);
    ofDisableDepthTest();
    pinta(x , y+r/2, n-1);
    pinta(x, y-r/2, n-1);
    pinta(x+r/2, y, n-1);
    pinta(x-r/2, y, n-1);
}
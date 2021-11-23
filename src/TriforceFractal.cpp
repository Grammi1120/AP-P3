#include "TriforceFractal.h"

TriforceFractal::TriforceFractal(){
    x = ofGetWidth()/3;
    y = 10;
    n = 10;
    size = ofGetHeight()/2;
}

void TriforceFractal::draw(){
    pinta(x, y, size, n);
}

void TriforceFractal::pinta(float x, float y, float size, int n){
    if (n == 0)
    {
        return;
    }

    ofPoint a(x, y);
    ofPoint b(x + size, y);
    ofPoint c(x + size / 2, y + ((sqrt(3) * size) / 2));

    ofDrawTriangle(a, b, c);

    pinta(x, y, size / 2, n - 1);
    pinta((a.x + b.x) / 2, (a.y + b.y) / 2, size / 2, n - 1);
    ofSetColor(color[n]);
    pinta((a.x + c.x) / 2, (a.y + c.y) / 2, size / 2, n - 1);
    
}

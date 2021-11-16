#include "CircleFractal.h"

CircleFractal::CircleFractal()
{
    x=ofGetWidth();
    y=ofGetHeight();
    n=4;
}
void CircleFractal::draw()
{
    pinta(x, y, n);
}
void CircleFractal::pinta(int x, int y, int n){
    ofSetColor(color[n]);
    ofDrawCircle(x, y, 100);
    pinta(x + 100, y, n - 1);
    pinta(x - 100, y, n - 1);
    pinta(x, y + 100, n - 1);
    pinta(x, y - 100, n - 1);
}
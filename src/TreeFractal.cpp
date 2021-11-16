#include "TreeFractal.h"

TreeFractal::TreeFractal() {
    x=ofGetWidth()/2;
    y=ofGetHeight()-50;
    n=4;
    distance=20;
    length=200;
}

void TreeFractal::draw(){
    pinta(length,n,x,y,distance);
}

void TreeFractal::drawTree(int length, int n, int x, int y, int distance){
    ofSetColor(color[n]);
    if(n!=0){
        int middleX = x;
        int middleY = y - length;
        int leftBranchX = x - length * cos(PI / 180 * distance);
        int leftBranchY = middleY - length * sin(PI / 180 * distance);
        int rightBranchX = x + length * cos(PI / 180 * distance);
        int rightBranchY = middleY - length * sin(PI / 180 * distance);

        ofDrawLine(x, y, x, y - length);
        ofDrawLine(x, y - length, x, y - length*2);
        ofDrawLine(x, y - length, rightBranchX, rightBranchY);
        ofDrawLine(x, y - length, leftBranchX, leftBranchY);

        drawTree(length / 2, n - 1, rightBranchX, rightBranchY, 30);
        drawTree(length / 2, n - 1, middleX, middleY, 30);
        drawTree(length / 2, n - 1, leftBranchX, leftBranchY, 30);
    }

}

void TreeFractal::pinta(int length, int n, int x, int y, int distance){
    drawTree(length, n, x, y, distance);
    drawTree(length*.40, n, x-300, y-50, distance);
    drawTree(length*.40, n, x+300, y-50, distance);
}
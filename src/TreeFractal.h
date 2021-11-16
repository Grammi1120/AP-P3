#pragma once
#include "FractalMode.h"

class TreeFractal: public FractalMode{
    private:
    int length;
    int distance;

    public:
        TreeFractal();
        void draw();
        void pinta(int length, int n, int x, int y, int distance);
        void drawTree(int length, int n, int x, int y, int distance);
};
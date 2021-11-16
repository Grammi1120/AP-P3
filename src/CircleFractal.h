#pragma once
#include "FractalMode.h"

class CircleFractal: public FractalMode{
    private:

    public:
        CircleFractal();
        void draw();
        void pinta(int x, int y, int n);

};
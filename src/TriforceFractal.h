#pragma once
#include "FractalMode.h"

class TriforceFractal: public FractalMode{
     
    public:
        TriforceFractal();
        void draw();
        void pinta(float x, float y, float size, int n);
        
    private:
        int size;

};
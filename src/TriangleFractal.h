#pragma once
#include "FractalMode.h"

class TriangleFractal: public FractalMode{
    private:
        int size;

    public:
        TriangleFractal();
        void draw();
        void pinta(float x, float y, float size, int n);
};
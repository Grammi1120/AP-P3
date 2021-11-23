#pragma once
#include "ofMain.h"
#include "FractalMode.h"
#include<vector>

class Animation{
    private:
        bool activate=false;
        bool increaseN=true;
        vector<FractalMode*> fractals;
        vector<int> speeds;
        vector<int> counters;
    public:
        Animation(vector<FractalMode*> fractals, vector<int> speeds);
        void tick();
        void draw();
        bool getActivate() { return activate; }
        void setActivate(bool b) { activate=b; }
        vector<FractalMode*> getFractals() { return fractals; };
};
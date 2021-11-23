#include "Animation.h"

Animation::Animation(vector<FractalMode*> fractals, vector<int> speeds){
    this->fractals=fractals;
    this->speeds=speeds;

    for(int i=0; i<speeds.size(); i++) counters.push_back(0);
}

void Animation::tick(){
    if(activate){
        for(int i=0; i<counters.size(); i++){
            counters[i]++;
            if(counters[i]==speeds[i]){
                counters[i]=0;

                if(fractals[i]->getN()==6) increaseN=false;
                else if(fractals[i]->getN()==0) increaseN=true;

                if(increaseN) fractals[i]->setN(fractals[i]->getN()+1);
                else fractals[i]->setN(fractals[i]->getN()-1);
            }
        }
    }
}

void Animation::draw(){
    if(activate) for(FractalMode* f:fractals) f->draw();
}

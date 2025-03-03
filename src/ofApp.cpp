#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    circleFractal = new CircleFractal();
    treeFractal = new TreeFractal();
    newFractal = new NewFractal();
    triforceFractal = new TriforceFractal();


    vector<int> speeds={20,20,20,20};
    fractalVector.push_back(circleFractal);
    fractalVector.push_back(treeFractal);
    fractalVector.push_back(newFractal);
    fractalVector.push_back(triforceFractal);
    animation=new Animation(fractalVector,speeds);
}

//--------------------------------------------------------------
void ofApp::update()
{
    /* The update method is called muliple times per second
    It's in charge of updating variables and the logic of our app */
    ofSetBackgroundColor(0, 0, 0);

    animation->tick();
}

//--------------------------------------------------------------
void ofApp::draw()
{
    /* The update method is called muliple times per second
    It's in charge of drawing all figures and text on screen */
    ofNoFill();
    for(FractalMode* fs:fractalVector){
        if(fs->getActivate()){
            fs->draw();
        }
    }
    
}
//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
    // This method is called automatically when any key is pressed
    if(!animation->getActivate())
    {
    switch (key)
    {
    case '1':
        mode = '1';
        setLevel(4);
        fractalVector[0]->setActivate(!fractalVector[0]->getActivate());
        break;
    case '2':
        mode = '2';
        setLevel(10);
        fractalVector[1]->setActivate(!fractalVector[1]->getActivate());
        break;
    case '3':
        mode = '3';
        setLevel(10);
        fractalVector[2]->setActivate(!fractalVector[2]->getActivate());
        break;
    case '4':
        mode = '4';
        setLevel(10);
        fractalVector[3]->setActivate(!fractalVector[3]->getActivate());
        break;
    }
    if(key == '-'){
        for(FractalMode* fs:fractalVector) if(fs->getN()>0) fs->setN(fs->getN()-1);
        
        if(mode=='1'){
            if(getLevel()>0 && getLevel()<=4){
                setLevel(getLevel()-1);
            }
        }
        else if(mode=='2'){
            if(getLevel()>0 && getLevel()<=10){
                setLevel(getLevel()-1);
            }
        }
        else if(mode=='3'){
            if(getLevel()>0 && getLevel()<=10){
                setLevel(getLevel()-1);
            }
        }
        else if(mode=='4'){
            if(getLevel()>0 && getLevel()<=10){
                setLevel(getLevel()-1);
            }
        }
    }
    if(key == '='){
        for(FractalMode* fs:fractalVector) if(fs->getN()>=0) fs->setN(fs->getN()+1);


        if(mode=='1'){
            if(getLevel()>=0 && getLevel()<4){
                setLevel(getLevel()+1);
            }
        }
        else if(mode=='2'){
            if(getLevel()>=0 && getLevel()<10){
                setLevel(getLevel()+1);
            }
        }
        else if(mode=='3'){
            if(getLevel()>=0 && getLevel()<10){
                setLevel(getLevel()+1);
            }
        }
        else if(mode=='4'){
            if(getLevel()>=0 && getLevel()<10){
                setLevel(getLevel()+1);
            }
        }
    }
    }

    switch(key){
        case ' ':
            if(animation->getActivate()==false){
                animation->setActivate(true);
                for(FractalMode* f:animation->getFractals()){
                    f->setN(0);
                }
            }
        break;
        case 'c':
            animation->setActivate(false);
            break;
    }
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{
}
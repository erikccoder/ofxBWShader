#include "ofApp.h"
#include "ofxBWShader.h"

//--------------------------------------------------------------
void ofApp::setup(){
    cam.initGrabber(640, 480);
    
}

//--------------------------------------------------------------
void ofApp::update(){
        cam.update();
}

//--------------------------------------------------------------
void ofApp::draw(){
    ofxBWShader::beginShader();
    cam.draw(0, 0);
    ofxBWShader::endShader();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}

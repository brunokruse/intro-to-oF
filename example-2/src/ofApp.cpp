#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    theta = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
    theta += 1;

}

//--------------------------------------------------------------
void ofApp::draw(){
    ofSetBackgroundColor(0);
    
    ofSetColor(255,0,0);
    
    ofPushMatrix();
        ofTranslate(ofGetWidth()/2, ofGetHeight()/2); // middle translate
        ofRotate(theta);                              // rotate
        ofSetRectMode(OF_RECTMODE_CENTER);            // around center
        ofDrawRectangle(0, 0, 300, 300);              // draw the rect
        ofSetRectMode(OF_RECTMODE_CORNER);            // reset
    ofPopMatrix();
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

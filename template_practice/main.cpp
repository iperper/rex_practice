/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-..-.-.

* FILE: main.cpp

* ORIGIN: Department of Mechanical Eng / CSAIL, MIT Cambridge MA

* CREATED: 31 Jul 2018

* MODIFIED: Wed 01 Aug 2018 09:14:03 AM EDT

* CREATED BY: Isaac Perper (adapted from
* https://bellcode.wordpress.com/2012/07/19/object-tracking-with-opencvs-templatematching/)

_._._._._._._._._._._._._._._._._._._._._._._._._._._._._._._.*/

#include "opencv2/imgcodecs.hpp"
#include "opencv2/highgui.hpp"
#include "opencv2/imgproc.hpp"
#include <iostream>

using namespace std;
using namespace cv;

ofVideoGrabber vid_grabber;
ofxCvColorImage c_img;
const int cam_width = 320;
const int cam_height = 240;

int main (int argc, char **argv){
  vid_grabber.setVerbose(true);
  vid_grabber.initGrabber(cam_width, cam_height);
  
  c_img.allocate(cam_width, cam_height);

  while(true){
    vid_grabber.grabFrame();
    if(vid_grabber.isFrameNew()){
      c_img.setFromPixels(vid_grabber.getPixels(), cam_width, cam_height);
      ofSetHexColor(0xffffff);
      c_img.draw(0,0);
  }

  return (1);
}


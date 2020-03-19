#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
//RotatedRect Class
int main(){
    RotatedRect rr1(Point2f(40,30),Size2f(40,20),30.f);//custom Rotated Retangle variable declaration 
    Point2f pts[4];//Point2f variable declaration
    rr1.points(pts); //save rr1 of point into pts
    cout<<"rr1.pts = "<<pts[0]<<","<<pts[1]<<","<<pts[2]<<","<<pts[3]<<endl;
    Rect br=rr1.boundingRect();//boundingRectangle is minimum rectangle inclusive Rectangle of rr1
    cout<<"br = "<<br<<endl;
    return 0;
}

#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
int main(){
    Point pt1;
    cout<<pt1<<endl;
    pt1.x=5;pt1.y=10;
    cout<<pt1<<endl;
    Point pt2(10,30);
    cout<<pt2<<endl;
    Point pt3=pt1+pt2;
    cout<<pt3<<endl;
    Point pt4=pt1*2;
    cout<<pt4<<endl;
    int d1=pt1.dot(pt2);
    cout<<d1<<endl;
    bool b1=(pt1==pt2);
    cout<<b1<<endl;
    Mat img;
    img= imread("lena.jpg");
    return 0;
}


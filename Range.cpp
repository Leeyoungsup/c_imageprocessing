#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
//Range Class
int main(){
    Range r1(0,10);//integers 0 through 10, but 10 not included
    cout<<"r1 = "<<r1<<endl;
    return 0;
}

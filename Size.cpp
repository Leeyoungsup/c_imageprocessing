#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
//Size Class
int main(){
    Size sz1,sz2(10,20);//Variable declaration
    cout<<"sz1 = "<<sz1<<endl;
    sz1.width=5; //width change sz1
    sz1.height=10; //height change sz1
    cout<<"sz1 = "<<sz1<<endl; //print
    cout<<"sz2 = "<<sz2<<endl;
    Size sz3=sz1+sz2; //sz3= sz1+sz2 in other words sz1.width + sz2.width = sz3.width and sz1.height + sz2.height = sz3.height
    
    cout<<"sz1 + sz2 = "<<sz3<<endl;
    Size sz4=sz1*2; //sz1*2;
    cout<<"sz1 * 2 = "<<sz4<<endl;
    int area1=sz4.area();//area return
    cout<<"area of sz1 * 2 ="<<area1<<endl;
    return 0;
}

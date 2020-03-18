#include "opencv2/opencv.hpp"
#include <iostream>
using namespace cv;
using namespace std;
//The positin and size of the rectangle,in other words RectClass include pointClass and sizeClass 
int main(){
    Rect rc1;//Variable declaration
    cout << "rc1 = "<<rc1<<endl; 

    Rect rc2(10,10,60,40); //custom Variable declaration
    cout<< "rc2 = "<< rc2<<endl;
    Rect rc3= rc1+Size(50,40);// rc1+ size(50X40)
    cout<<"rc1 + Size(50,40) = "<<rc3<<endl;
    Rect rc4= rc2+Point(10,10);// rc2+ point(10,10)
    cout<<"rc2 + Point(10,10) = "<<rc4<<endl;
    Rect rc5= rc3&rc4;//rc5=rc3&rc4,in other words A rectangle where two rectangle interect
    cout<<"rc3&rc4 = "<<rc5<<endl;
    Rect rc6= rc3|rc4;//A rectangle where two rectangle include
    cout<<"rc3|rc4 = "<<rc6<<endl;

    return 0;
}

#include"opencv2/opencv.hpp"
#include<iostream>
using namespace cv;
using namespace std;
int main(){
    Mat img1;//declaration matrix
    Mat img2(480,640,CV_32FC3);//custom matrix(3-channel-float matrix)
    Mat img3(Size(480,640),CV_32SC1);//custom matrix(1-channel-int matrix)
    Mat img4(480,640,CV_32FC3,Scalar(0,0,255));//the matrix is 3-channel-int matrix and color is red
    Mat img5(480,640,CV_32FC1,Scalar(123));//the matrix is 1-channel-int matrix of Grat-scale
    Mat mat1 = Mat::ones(3,3,CV_32FC1);//the matrix is 1-channel-integer matrix of ones
    Mat mat2 = Mat::eye(3,3,CV_32FC1);//the matrix is 1-channel-integer unit matrix
    Mat mat3 = Mat::zeros(3,3,CV_32FC1);//the matrix is 1-channel-integer matrix of zeros
    float data[]={1,0,1,0,1,0,1,0,1};//list variable declaration
    Mat mat4(3,3,CV_32FC1,data);//list matrixing
    mat4.create(256,256,CV_8UC3);//assign new size and type to mat4
    Mat mat5(4,4,CV_32FC1);//assign new size and type to mat5
    mat4=Scalar(255,0,0);//Batch change of all element value to matrix
    mat5.setTo(1.f);//Batch change of all element value to matrix
    img1=imread("lena.png");//assign photo to img1
    img2=img1;//shallow copy of img1 to img2
    img1.copyTo(img5);//Deep copy of img1 to img5
    namedWindow("image");
    imshow("image",img5);
    waitKey(0);  
    return 0;
}

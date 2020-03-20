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
    float data[]={1,2,0,0,255,6,7,255,9};//list variable declaration
    Mat mat4(3,3,CV_32FC1,data);//list matrixing
    namedWindow("image");
    imshow("image",mat4);
    waitKey(0);  
    return 0;
}

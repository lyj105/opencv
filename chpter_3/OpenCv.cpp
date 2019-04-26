// OpenCv.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>


using namespace cv;



int main()
{
    Mat img=imread("F:\\a7691515_s.jpg");
	
	//imshow("{原始图}canny边缘检测", img);

	Mat dstImages, edge, grayImages;

	dstImages.create(img.size(),img.type());

	cvtColor(img,grayImages,COLOR_BGR2GRAY);

	//请使用内核来
	blur(grayImages, edge, Size(3, 3));

	Canny(edge,edge,3 ,9,3);


	imshow("a7691515_s", edge);
	waitKey(600000);
	
	//0x00007FF9A388D030 (ntdll.dll)处(位于 OpenCv.exe 中)引发的异常: 0xC0000005: 读取位置 0x0000000000000010 时发生访问冲突。
	destroyAllWindows();

	return 0;
	
}



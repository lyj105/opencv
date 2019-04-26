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
	
	imshow("a7691515_s", img);

	waitKey(0);
    
	//0x00007FF9A388D030 (ntdll.dll)处(位于 OpenCv.exe 中)引发的异常: 0xC0000005: 读取位置 0x0000000000000010 时发生访问冲突。
	//destroyAllWindows();

	return 0;
	
}



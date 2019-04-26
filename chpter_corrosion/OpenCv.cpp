// OpenCv.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "pch.h"
#include <iostream>

#include <opencv2/opencv.hpp>  
#include <opencv2/core/core.hpp>


using namespace cv;

/* 图像的腐蚀*/
//https://blog.csdn.net/junpengxue/article/details/79958651
/*腐蚀：删除对象边界的某些像素
膨胀：给图像中的对象边界添加像素
算法：
膨胀算法：用3X3的结构元素，扫描二值图像的每一个像素，用结构元素与其覆盖的二值图像做“与”运算，如果都为0，结构图像的该像素为0，否则为1.结果：使二值图像扩大一圈。
腐蚀算法：用3X3的结构元素，扫描二值图像的每一个像素，用结构元素与其覆盖的二值图像做“与”运算，如果都为1，结构图像的该像素为1，否则为0.结果：使二值图像减小一圈。
*/

int main()
{
    Mat img=imread("F:\\a7691515_s.jpg");
	
	imshow("a7691515_s", img);

	//进行腐蚀操作
	Mat  elemet=getStructuringElement(MORPH_RECT,Size(15,15));
	Mat dstImages;
   
	erode(img, dstImages, elemet);

	imshow("a7691515_s", dstImages);
	waitKey(6000);
	
	//0x00007FF9A388D030 (ntdll.dll)处(位于 OpenCv.exe 中)引发的异常: 0xC0000005: 读取位置 0x0000000000000010 时发生访问冲突。
	destroyAllWindows();

	return 0;
	
}



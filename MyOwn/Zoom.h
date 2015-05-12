#include "stdafx.h"
#include <opencv2\highgui\highgui.hpp>
#include <opencv2\imgproc\imgproc.hpp>
using namespace std;
using namespace cv;


class Zoom
{
public:
	Mat ZoomIn(Mat src1, int k1){
		Mat dst;
		while (true)
		{
			int c;
			c = waitKey(10);
			if ((char)c == 27)
			{
				break;
			}
			pyrUp(src1, dst, Size(src1.cols * k1, src1.rows * k1));

		}
		return dst;
	}
	Mat ZoomOut(Mat src2, int k2){
		Mat dst;
		while (true)
		{
			int c;
			c = waitKey(10);
			if ((char)c == 27)
			{
				break;
			}
			pyrDown(src2, dst, Size(src2.cols / k2, src2.rows / k2));

		}
		return dst;
	}
};

#pragma once
#include <opencv2/highgui/highgui.hpp>
#include <vector>

class Test1
{
private:
	double angle(cv::Point pt1, cv::Point pt2, cv::Point pt0)
	{
		double dx1 = pt1.x - pt0.x;
		double dy1 = pt1.y - pt0.y;
		double dx2 = pt2.x - pt0.x;
		double dy2 = pt2.y - pt0.y;
		return (dx1 * dx2 + dy1 * dy2) / sqrt((dx1 * dx1 + dy1 * dy1) * (dx2 * dx2 + dy2 * dy2) + 1e-10);
	}

	void sortCorners(std::vector<cv::Point2f>& corners, cv::Point2f center)
	{
		std::vector<cv::Point2f> top, bot;

		for (int i = 0; i < corners.size(); i++)
		{
			if (corners[i].y < center.y)
				top.push_back(corners[i]);
			else
				bot.push_back(corners[i]);
		}
		corners.clear();

		if (top.size() == 2 && bot.size() == 2){
			cv::Point2f tl = top[0].x > top[1].x ? top[1] : top[0];
			cv::Point2f tr = top[0].x > top[1].x ? top[0] : top[1];
			cv::Point2f bl = bot[0].x > bot[1].x ? bot[1] : bot[0];
			cv::Point2f br = bot[0].x > bot[1].x ? bot[0] : bot[1];


			corners.push_back(tl);
			corners.push_back(tr);
			corners.push_back(br);
			corners.push_back(bl);
		}
	}
public:
	Test1(void);
	~Test1(void);
	void Test();
};


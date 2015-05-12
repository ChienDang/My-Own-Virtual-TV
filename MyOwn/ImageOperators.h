#include <iostream>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <vector>

double angle(cv::Point pt1, cv::Point pt2, cv::Point pt0);
void sortCorners(std::vector<cv::Point2f>& corners, cv::Point2f center);
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgcodecs.hpp>

int main() {
	cv::Mat img = cv::imread("img_1.jpg");
	cv::imshow("", img);
	cv::waitKey(0);
	cv::destroyAllWindows();
	return 0;
}
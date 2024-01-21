#include <opencv2/opencv.hpp>

void ConvertColor(const cv::Mat &inmat, cv::Mat &outmat) {
  cv::cvtColor(inmat, outmat, cv::COLOR_BGR2GRAY);
  return;
}

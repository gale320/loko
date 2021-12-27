#pragma once
#include "lokoinc.h"

#include <QtGui/QImage>

#include <opencv2/core.hpp>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/imgproc.hpp>

namespace loko{


bool CvMat2QImage(const cv::Mat& mat, QImage &image1);
bool  QImage2cvMat(QImage& image, cv::Mat &mat);

}

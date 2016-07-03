#ifndef VISION_H
#define VISION_H

#include <QImage>
#include <QPixmap>
#include <opencv2/core/core.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <opencv2/highgui/highgui.hpp>
#include "team.h"
#include "hsvcolor.h"
#include "ball.h"

class Vision
{
private:
	cv::VideoCapture cap;
public:
	Vision();
	QImage cvMatToQImage( const cv::Mat &inMat );
	cv::Mat getFrame();

};

#endif
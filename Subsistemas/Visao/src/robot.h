#ifndef ROBOT_H
#define ROBOT_H

#include <iostream>
#include <vector>
#include "point.h"
#include "hsvcolor.h"

class Robot{
private:
	Point position;
	double angle;	
	std::vector<Point> lastPositions;
	void addToHistory(Point p);
public:
	Robot(HSVColor color = HSVColor(), Point position = Point(), double angle = 0);
	void setPosition(Point pos);
	void setPosition(double x, double y);
	void setAngle(double ang);
	Point getPosition();
	double getAngle();	
	std::vector<Point> getLastPositions();
	const HSVColor color;
};

std::ostream& operator<<(std::ostream& os, Robot& r);

#endif
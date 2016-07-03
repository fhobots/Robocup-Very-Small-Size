#ifndef BALL_H
#define BALL_H

#include <iostream>
#include "point.h"
#include "hsvcolor.h"

class Ball {
private:
	const HSVColor color;
	Point position;
public:
	Ball(HSVColor color, Point position = Point());
	void setPosition(Point position);
	void setPosition(double x, double y);
	HSVColor getColor();
	Point getPosition();
};
std::ostream& operator<<(std::ostream& os, Ball& b);

#endif
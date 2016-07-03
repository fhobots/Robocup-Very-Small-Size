#include "ball.h"

Ball::Ball(HSVColor color, Point position): color(color), position(position) {}
void Ball::setPosition(Point position){this->position = position;}
void Ball::setPosition(double x, double y){this->position = Point(x,y);}
HSVColor Ball::getColor(){return this->color;}
Point Ball::getPosition(){return this->position;}
std::ostream& operator<<(std::ostream& os, Ball& b){
	return os << "(" << b.getPosition().getX() << ", " << b.getPosition().getY() << ")";
}
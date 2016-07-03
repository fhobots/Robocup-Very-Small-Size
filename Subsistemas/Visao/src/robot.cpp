#include "robot.h"

#define maxPositions 100

Robot::Robot(HSVColor color, Point position, double angle): position(position), angle(angle), color(color){}
void Robot::setPosition(Point pos){this->position = pos; this->addToHistory(pos);}
void Robot::setPosition(double x, double y){this->position = Point(x,y); this->addToHistory(Point(x,y));}
void Robot::setAngle(double ang){this->angle = ang;}
Point Robot::getPosition(){ return this->position; }
double Robot::getAngle(){ return this->angle; }
void Robot::addToHistory(Point p){
	lastPositions.push_back(p);
	while(lastPositions.size() > maxPositions){
		lastPositions.erase(lastPositions.begin());
	}
}
std::vector<Point> Robot::getLastPositions(){return this->lastPositions;}
std::ostream& operator<<(std::ostream& os, Robot& r){
	return os << "(" << r.getPosition().getX() << ", " << r.getPosition().getY() << ", " << r.getAngle() << "\u02DA)";
}
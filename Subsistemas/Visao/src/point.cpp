#include "point.h"
#include <math.h>

Point::Point(double x, double y): x(x), y(y) {}
double Point::getX(){return this->x;}
double Point::getY(){return this->y;}
void Point::setX(double x){this->x = x;}
void Point::setY(double y){this->y = y;}
double Point::distance(Point a, Point b){ return sqrt(pow((a-b).getX(), 2) + pow((a-b).getY(), 2));}
std::ostream& operator<<(std::ostream& os, Point& p){ return os << "(" << p.getX() << ", " << p.getY() << ")";}
Point operator+(Point& p1, Point& p2){return Point(p1.getX()+p2.getX(), p1.getY()+p2.getY());}
Point operator-(Point& p1, Point& p2){return Point(p1.getX()-p2.getX(), p1.getY()-p2.getY());}
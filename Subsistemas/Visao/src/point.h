#ifndef COORDENADA_H
#define COORDENADA_H

#include <iostream>

class Point{
    public:
        Point(double x = 0, double y =0);        
        double getX();
        double getY();
        void setX(double x);
        void setY(double y);
        static double distance(Point a, Point b);
    private:
        double x;
        double y;
};

std::ostream& operator<<(std::ostream& os, Point& p);
Point operator+(Point& p1, Point& p2);
Point operator-(Point& p1, Point& p2);

#endif // COORDENADA_H
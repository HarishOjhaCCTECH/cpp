#include "../headers/Point2d.h"
Point2d::Point2d():mx(0),my(0){}
Point2d::Point2d(double x, double y) : mx(x), my(y){}
Point2d::~Point2d(){}
double Point2d::x()const{return mx;}
double Point2d::y()const{return my;}
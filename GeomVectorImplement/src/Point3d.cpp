#include "../headers/Point3d.h"
Point3d::Point3d():mx(0), my(0), mz(0){}
Point3d::Point3d(double x, double y, double z) : mx(x), my(y), mz(z){}
Point3d::~Point3d(){}
void Point3d::setX(double x){mx = x;}
void Point3d::setY(double y){my = y;}
void Point3d::setZ(double z){mz = z;}
double Point3d::x()const{return mx;}
double Point3d::y()const{return my;}
double Point3d::z()const{return mz;}
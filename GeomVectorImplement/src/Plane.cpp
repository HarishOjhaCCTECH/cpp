#include "../headers/Plane.h"
#include "../headers/GeomVector.h"
Plane::Plane(GeomVector normal){
    mStart.setX(normal.mStartGetter().x());
    mStart.setY(normal.mStartGetter().y());
    mStart.setZ(normal.mStartGetter().z());
    mEnd.setX(normal.mEndGetter().x());
    mEnd.setY(normal.mEndGetter().y());
    mEnd.setZ(normal.mEndGetter().z());
}
double Plane::mIcoefficientGetter(){return mIcoefficient;}
double Plane::mJcoefficientGetter(){return mJcoefficient;}
double Plane::mKcoefficientGetter(){return mKcoefficient;}
Point3d Plane::mStartGetter(){return mStart;}
Point3d Plane::mEndGetter(){return mEnd;}
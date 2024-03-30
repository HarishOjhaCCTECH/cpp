#pragma once
class GeomVector;
#include "Point3d.h"
class Plane
{
    public:
        Plane(GeomVector n);
        double mIcoefficientGetter();
		double mJcoefficientGetter();
		double mKcoefficientGetter();
        Point3d mStartGetter();
        Point3d mEndGetter();
    private:
        Point3d mStart;
        Point3d mEnd;
        double mIcoefficient;
		double mJcoefficient;
		double mKcoefficient;
};
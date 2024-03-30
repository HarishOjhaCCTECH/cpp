#pragma once
#include "Point2d.h"
#include "Point3d.h"
#include "Plane.h"
class GeomVector
{
    public:
        GeomVector() = default;
		GeomVector(double x, double y, double z);
		GeomVector(Point2d scalarValuend);
		GeomVector(Point2d start, Point2d scalarValuend);
		GeomVector(Point3d scalarValuend);
		GeomVector(Point3d start, Point3d scalarValuend);
        ~GeomVector() = default;		

		double* directionCosines();
		double magnitude() const;
		bool isEqual(const GeomVector& other) const;
		
		void addScalar(double scalar);
		void multiplyScalar(double scalar);
		void scalarSubtract(double scalarValue);
		void scalarDivision(double scalarValue);

		void vectorAdd(GeomVector& other);
		double dotProduct(const GeomVector& other) const;
		void crossProduct(GeomVector& other);
		void normalize();
		void setLength(double newLength);

		double angleBetweenVector(const GeomVector& other);
		double angleWithXaxis();
		double angleWithYaxis();
		double angleWithZaxis();
		double angleBetweenVectorAndPlane(Plane& planeNormal);

		double projectionOfVectorOnPlane(Plane planeNormal);
		double vectorProjectionOnVector(const GeomVector& other);

		Point3d mStartGetter()const;
		Point3d mEndGetter()const;
	private:
		void coeficientUpdater();

		Point3d mStart;
		Point3d mEnd;
		
		double mIcoefficient;
		double mJcoefficient;
		double mKcoefficient;		
};

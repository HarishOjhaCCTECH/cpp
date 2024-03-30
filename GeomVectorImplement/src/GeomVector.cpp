#include "../headers/GeomVector.h"
#include "../headers/TxtGeneration.h"
#include <cmath>
#define PI 3.14159265359
GeomVector::GeomVector(double x, double y, double z)
{
    mEnd.setX(x);
    mEnd.setY(y);
    mEnd.setZ(z);
    coeficientUpdater();
}
GeomVector::GeomVector(Point2d end)
{
    mEnd.setX(end.x());
    mEnd.setY(end.y());
    mEnd.setZ(0);
    coeficientUpdater();
}
GeomVector::GeomVector(Point2d start, Point2d end)
{
    mStart.setX(start.x());
    mStart.setX(start.y());
    mStart.setX(0);
    mEnd.setX(end.x());
    mEnd.setY(end.y());
    mEnd.setZ(0);
    coeficientUpdater();
}
GeomVector::GeomVector(Point3d end)
{
    mEnd.setX(end.x());
    mEnd.setY(end.y());
    mEnd.setZ(0);
    coeficientUpdater();
}
GeomVector::GeomVector(Point3d start, Point3d end)
{
    mStart.setX(start.x());
    mStart.setY(start.y());
    mStart.setZ(start.z());
    mEnd.setX(end.x());
    mEnd.setY(end.y());
    mEnd.setZ(end.z());
    coeficientUpdater();
}
void GeomVector::coeficientUpdater()
{
    mIcoefficient = mEnd.x()-mStart.x();
    mJcoefficient = mEnd.y()-mStart.y();
    mKcoefficient = mEnd.z()-mStart.z();
}
double GeomVector::dotProduct(const GeomVector& other)const
{
    return ((this->mIcoefficient* other.mIcoefficient) + (this->mJcoefficient* other.mJcoefficient)+(this->mKcoefficient* other.mKcoefficient));    
}
double GeomVector::magnitude()const
{
    return sqrt(pow(mIcoefficient,2) + pow(mJcoefficient,2) + pow(mKcoefficient,2));
}
bool GeomVector::isEqual(const GeomVector& other)const
{
    return (mIcoefficient == other.mIcoefficient && mJcoefficient == other.mJcoefficient &&  mKcoefficient == other.mKcoefficient);
}
void GeomVector::crossProduct(GeomVector& other)
{
    double x = (this->mJcoefficient*other.mKcoefficient) - (this->mKcoefficient*other.mJcoefficient);
    double y = (this->mIcoefficient*other.mKcoefficient) - (this->mKcoefficient*other.mIcoefficient);
    double z = (this->mIcoefficient*other.mJcoefficient) - (this->mJcoefficient*other.mIcoefficient);
    GeomVector tempV(x,-y,z);
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(other, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/secondVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
Point3d GeomVector::mStartGetter()const{return mStart;}
Point3d GeomVector::mEndGetter()const{return mEnd;}
void GeomVector::vectorAdd(GeomVector& other)
{
    double x = (this->mIcoefficient + other.mIcoefficient);
    double y = (this->mJcoefficient + other.mJcoefficient);
    double z = (this->mKcoefficient + other.mKcoefficient);
    GeomVector tempV(x,y,z);
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(other, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/secondVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
void GeomVector::normalize()
{
    double r = this->magnitude();
    GeomVector tempV((mIcoefficient/r), (mJcoefficient/r), (mKcoefficient/r));
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
void GeomVector::addScalar(double scalarValue)
{
    GeomVector tempV(mIcoefficient+scalarValue, mJcoefficient + scalarValue, mKcoefficient + scalarValue);
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
void GeomVector::multiplyScalar(double scalarValue)
{
    GeomVector tempV(mIcoefficient*scalarValue, mJcoefficient * scalarValue, mKcoefficient *scalarValue);
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
double GeomVector::angleBetweenVector(const GeomVector& other)
{
    double res = (this->dotProduct(other))/(this->magnitude()*other.magnitude());
    return acos(res)*180/PI;
}
double GeomVector::angleWithXaxis()
{
    GeomVector axis(1,0,0);
    return this->angleBetweenVector(axis);
}
double GeomVector::angleWithYaxis()
{
    GeomVector axis(0,1,0);
    return this->angleBetweenVector(axis);
}
double GeomVector::angleWithZaxis()
{
    GeomVector axis(0,0,1);
    return this->angleBetweenVector(axis);
}
double GeomVector::vectorProjectionOnVector(const GeomVector& other){

    double r = other.magnitude();
    GeomVector tempV((other.mIcoefficient/r), (other.mJcoefficient/r), (other.mKcoefficient/r));
    return this->dotProduct(tempV);
}
void GeomVector::scalarSubtract(double scalarValue)
{
    GeomVector tempV(mIcoefficient-scalarValue,mJcoefficient-scalarValue,mKcoefficient-scalarValue);
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
void GeomVector::scalarDivision(double scalarValue)
{
    GeomVector tempV(mIcoefficient/scalarValue,mJcoefficient/scalarValue,mKcoefficient/scalarValue);
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
double* GeomVector::directionCosines()
{
    double* res = new double[3];
    double r = this->magnitude();
    res[0] = this->mIcoefficient/r;
    res[1] = this->mJcoefficient/r;
    res[2] = this->mKcoefficient/r;
    return res;
}
void GeomVector::setLength(double scalarValue)
{
    double r = this->magnitude();
    GeomVector tempV((this->mIcoefficient*scalarValue)/r, (this->mJcoefficient*scalarValue)/r, (this->mKcoefficient*scalarValue)/r);
    TxtGeneration::getObj().txtGenerator(*this, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/firstVector.txt");
    TxtGeneration::getObj().txtGenerator(tempV, "D:/harish_ojha_workspace/cpp_assignments/t21/txtFiles/resultant.txt");
}
double GeomVector::angleBetweenVectorAndPlane(Plane& planeNormal)
{
    GeomVector tempV(planeNormal.mIcoefficientGetter(), planeNormal.mJcoefficientGetter(), planeNormal.mKcoefficientGetter());
    double res = this->angleBetweenVector(tempV)*180/PI;
    return (90-res);
}
double GeomVector::projectionOfVectorOnPlane(Plane planeNormal)
{
    double normalMagnitude = sqrt(pow(planeNormal.mIcoefficientGetter(),2) + pow(planeNormal.mJcoefficientGetter(),2) + pow(planeNormal.mKcoefficientGetter(),2));
    double res = 90 - ((asin(normalMagnitude))*180/PI);
    return res;
}
#pragma once
class Point3d
{
    public:
        Point3d();
        Point3d(double x, double y, double z);
        ~Point3d();
        void setX(double x);
        void setY(double y);
        void setZ(double z);
        double x() const;
        double y() const;
        double z() const;
    private:
        double mx;
        double my;
        double mz;
};

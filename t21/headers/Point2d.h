#pragma once
class Point2d
{
    public:
        Point2d();
        Point2d(double x, double y);
        ~Point2d();
        double x() const;
        double y() const;
    private:
        double mx;
        double my;
};
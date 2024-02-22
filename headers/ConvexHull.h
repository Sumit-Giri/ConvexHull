#pragma once
#include <vector>
#include "Point2D.h"
#include "Point3D.h"
using namespace std;

class ConvexHull
{
public:
    ConvexHull();
    ~ConvexHull();

    vector<Point2D> convexHull(vector<Point2D> &points);
};
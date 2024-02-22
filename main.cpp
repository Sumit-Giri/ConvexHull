#include <iostream>
#include "./headers/ConvexHull.h"
#include "./headers/Point2D.h"
#include "./headers/Point3D.h"
#include "./headers/STLreader.h"
#include "./headers/STLwriter.h"
#include "./headers/Triangle.h"
#include "./headers/Triangulation.h"
using namespace std;

int main()
{
    ConvexHull convex;
    string filepath1 = "resources//Pointsinput.txt";
    STLReader reader;
    vector<Point2D> points = reader.readpoints(filepath1);
    vector<Point2D> convexHullPoints = convex.convexHull(points);
    string filepath = "resources//convexHUllOutput.txt";
    STLWriter writeintxt;
    writeintxt.writeInTxt(filepath, convexHullPoints);
}
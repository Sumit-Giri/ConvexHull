// STLWriter.h
#pragma once
#include <map>
#include <string>
#include <vector>
#include "Point2D.h"
#include "Triangle.h"
#include "Triangulation.h"

class STLWriter
{
public:
    // Function to write geometry data to an STL file
    void writeSTLToFile(std::string &filePath, Triangulation &triangulationObj);
    void writeInTxt(std::string &filePath, vector<Point2D> &points);
};
#ifndef UTIL_H
#define UTIL_H

// Contains several utilities functions

#include <vector>

namespace util
{
    bool approximatelyEqual(double a, double b);
    void swap(int* arr, int i, int j);
    void swap(std::vector<int>& arr, int i, int j);
}

#endif
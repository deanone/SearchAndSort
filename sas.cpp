#include "sas.h"
#include <math.h>
#include <limits> 
#include <cstddef>

// Donald Knuth's proposal for a floating point comparison
bool sas::approximatelyEqual(const double& a, const double& b)
{
    return fabs(a - b) <= ((fabs(a) < fabs(b) ? fabs(b) : fabs(a)) * std::numeric_limits<double>::epsilon());
}

// Base linear search algorithm
int sas::linearSearch(const std::vector<double>& arr, const double& key)
{
    int index = -1;
    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (approximatelyEqual(key, arr[i]))
        {
            index = i;
            break;
        }
    }
    return index;
}

// Recursive implementation of binary search algorithm (arr vector of int)
int sas::binarySearch(const std::vector<int>& arr, int start, int end, int key)
{
    if ((key < arr[start]) || (key > arr[end]))
    {
        return -1;
    }
    else
    {
        int mid = (start + end) / 2;
        if (approximatelyEqual(key, arr[mid]))
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            return binarySearch(arr, mid + 1, end, key);
        }
        else
        {
            return binarySearch(arr, start, mid - 1, key);
        }
    }
}

// Recursive implementation of binary search algorithm (arr plain int array)
int sas::binarySearch(int arr[], int start, int end, int key)
{
    if (end < start)
    {
        return -1;
    }
    int mid = (start + end) / 2;
    if (key == arr[mid])
    {
        return mid;
    }
    else
    {
        if (key > arr[mid])
        {
            binarySearch(arr, mid + 1, end, key);
        }
        else
        {
            binarySearch(arr, start, mid - 1, key);
        }
    }
}

// Base Bubblesort algorithm (time complexity: O(n^2))
void sas::bubbleSort(std::vector<double>& arr)
{
    for (size_t length = arr.size(); length > 0; length--)
    {
        for (size_t i = 0; i < (length - 1); ++i)
        {
            double temp = arr[i];
            if (arr[i] > arr[i + 1])
            {
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}
#ifndef SAS_H
#define SAS_H

#include <vector>

// SAS stands for Search and Sort

namespace sas
{
    // Searching
    int linearSearch(const std::vector<double>& arr, const double& key);
    int binarySearch(const std::vector<int>& arr, int start, int end, int key);
    int binarySearch(int arr[], int start, int end, int key);

    // Sorting
    void bubbleSort(std::vector<double>& arr);
    void insertionSort(int* arr, int n);
}

#endif  // SAS_H
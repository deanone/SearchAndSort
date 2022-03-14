#ifndef SAS_H
#define SAS_H

#include <vector>

// SAS stands for Search and Sort

namespace sas
{
    // Searching
    int linearSearch(const std::vector<int>& arr, int key);
    int linearSearch(int arr[], int n, int key);
    int binarySearch(const std::vector<int>& arr, int start, int end, int key);
    int binarySearch(int arr[], int start, int end, int key);

    // Sorting
    void bubbleSort(std::vector<int>& arr);
    void insertionSort(int* arr, int n);
    void selectionSort(int* arr, int n);
    int partition(int arr[], int lo, int hi);
    void quicksort(int arr[], int lo, int hi);
}

#endif  // SAS_H
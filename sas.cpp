#include "sas.h"
#include "util.h"

// Linear search algorithm (arr: vector of int)
// Time complexity: O(n), where n is the number of elements in the array
int sas::linearSearch(const std::vector<int>& arr, int key)
{
    int index = -1;
    for (size_t i = 0; i < arr.size(); ++i)
    {
        if (key == arr[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

// Linear search algorithm (arr: plain int array)
// Time complexity: O(n), where n is the number of elements in the array
int sas::linearSearch(int arr[], int n, int key)
{
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            index = i;
            break;
        }
    }
    return index;
}

// Binary search algorithm (arr: vector of int)
// Time complexity: O(logn), where n is the number of elements in the array
int sas::binarySearch(const std::vector<int>& arr, int start, int end, int key)
{
    if ((key < arr[start]) || (key > arr[end]))
    {
        return -1;
    }
    else
    {
        int mid = (start + end) / 2;    // or int mid = start + ((end - start) / 2);
        if (key == arr[mid])
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

// Binary search algorithm (arr: plain int array)
// Time complexity: O(logn), where n is the number of elements in the array
int sas::binarySearch(int arr[], int start, int end, int key)
{
    if (end < start)
    {
        return -1;
    }

    int mid = (start + end) / 2;    // or int mid = start + ((end - start) / 2);
    if (key == arr[mid])
    {
        return mid;
    }
    else if (key > arr[mid])
    {
        binarySearch(arr, mid + 1, end, key);
    }
    else
    {
        binarySearch(arr, start, mid - 1, key);
    }
}

// Base Bubblesort algorithm (time complexity: O(n^2))
// Time complexity: O(n^2), where n is the number of elements in the array
void sas::bubbleSort(std::vector<int>& arr)
{
    for (size_t n = arr.size(); n > 0; n--)
    {
        for (size_t i = 0; i < (n - 1); ++i)
        {
            if (arr[i] > arr[i + 1])
            {
                util::swap(arr, i, i + 1);
            }
        }
    }
}

// Insertion sort algorithm, iterative implementation
// Time complexity: worst: O(n^2), average: O(n^2), best: O(n), where n is the number of elements in the array
void sas::insertionSort(int* arr, int n)
{
    int i = 1;
    while (i < n)
    {
        int j = i;
        while ((j > 0) && (arr[j - 1] > arr[j]))
        {
            util::swap(arr, j - 1, j);
            j--;
        }
        i++;
    }
}

// Lomuto partition scheme, i.e., it selects the last element of the array as pivot
int sas::partition(int arr[], int lo, int hi)
{
    int pivot = arr[hi];
    int i = (lo - 1);
    for (int j = lo; j < hi; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;
            util::swap(arr, i, j);
        }
    }
    
    i++;
    util::swap(arr, i, hi);
    
    return i;
}

// Quicksort algorithm, recursive implementation
// Time complexity: worst: O(n^2), average: O(nlogn), best: O(nlogn), where n is the number of elements in the array 
void sas::quicksort(int arr[], int lo, int hi)
{
    if ((lo > hi) || (lo < 0))
    {
        return;
    }

    int p = partition(arr, lo, hi);
    quicksort(arr, lo, p - 1);
    quicksort(arr, p + 1, hi);

    return;
}

// Selection sort algorithm, iterative implementation
// Time complexity: worst: O(n^2), average: O(n^2), best: O(n^2), where n is the number of elements in the array
void sas::selectionSort(int* arr, int n)
{
    for (int i = 0; i < (n - 1); i++)
    {
        int jMin = i;
        for (int j = (i + 1); j < n; j++)
        {
            if (arr[j] < arr[jMin])
            {
                jMin = j;
            }
        }

        if (jMin != i)
        {
            util::swap(arr, i, jMin);
        }
    }
}

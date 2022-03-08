#include <iostream>
#include <ctime>
#include "sas.h"

int main(int argc, char *argv[])
{
    if (argc == 2)
    {
        std::string algorithm(argv[1]);
        if (algorithm.compare("linear_search") == 0)
        {
            // input array and search key
            size_t n = 10000000;
            std::vector<double> arr;
            for (size_t i = 0; i < n; ++i)
            {
                arr.push_back(static_cast<double>(i));
            }
            double key = static_cast<double>((n - 1) / 2);

            int start = clock();
            int id = sas::linearSearch(arr, key);
            int stop = clock();
            double elapsedTime = ((stop - start) / static_cast<double>(CLOCKS_PER_SEC)) * 1000.0;
            std::cout << "Linear search results:\n";
            std::cout << "id = " << id << std::endl;
            std::cout << "Elapsed time: " << elapsedTime << " milliseconds\n";
            std::cout << std::endl;
        }
        else if (algorithm.compare("binary_search") == 0)
        {
            // input array and search key
            size_t n = 10000000;
            std::vector<int> arr;
            for (size_t i = 0; i < n; ++i)
            {
                arr.push_back((i));
            }
            double key = ((n - 1) / 2);

            int start = clock();
            int id = sas::binarySearch(arr, 0, arr.size() - 1, key);
            int stop = clock();
            double elapsedTime = ((stop - start) / static_cast<double>(CLOCKS_PER_SEC)) * 1000.0;
            std::cout << "Binary search results:\n";
            std::cout << "id = " << id << std::endl;
            std::cout << "Elapsed time: " << elapsedTime << " milliseconds\n";
            std::cout << std::endl;
        }
        else if (algorithm.compare("bubble_sort") == 0)
        {
            std::vector<double> arr;
            arr.push_back(65);
            arr.push_back(15);
            arr.push_back(2);
            arr.push_back(39);
            arr.push_back(5);

            // print unsorted array
            std::cout << "Initial array:\n";
            for (size_t i = 0; i < arr.size(); ++i)
            {
                if (i != (arr.size() - 1))
                {
                    std::cout << arr[i] << " ";
                }
                else
                {
                    std::cout << arr[i];
                }
            }

            sas::bubbleSort(arr);
            std::cout << std::endl;
            std::cout << std::endl;

            // print sorted array
            std::cout << "Sorted array:\n";
            for (size_t i = 0; i < arr.size(); ++i)
            {
                if (i != (arr.size() - 1))
                    std::cout << arr[i] << " ";
                else
                    std::cout << arr[i];
            }
            
            std::cout << std::endl;
        }
        else if (algorithm.compare("insertion_sort") == 0)
        {
            int arr[] = {4, 1, 2, 6, 8, 7, 11, 3, 3};
            int n = sizeof(arr) / sizeof(arr[0]);
            std::cout << "Unsorted array:\n";
            for (int i = 0; i < n; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";

            sas::insertionSort(arr, n);

            std::cout << "Sorted array:\n";

            for (int i = 0; i < n; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }
        else if (algorithm.compare("quicksort") == 0)
        {
            int arr[] = {4, 1, 2, 6, 8, 7, 11, 3, 3};
            int n = sizeof(arr) / sizeof(arr[0]);
            std::cout << "Unsorted array:\n";
            for (int i = 0; i < n; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";

            sas::quicksort(arr, 0, n - 1);

            std::cout << "Sorted array:\n";

            for (int i = 0; i < n; i++)
            {
                std::cout << arr[i] << " ";
            }
            std::cout << "\n";
        }
        else
        {
            std::cout << "The program's argument can be one of the following:\n";
            std::cout << "linear_search: for the linear search algorithm\n";
            std::cout << "binary_search: for the binary search algorithm\n";
            std::cout << "bubble_sort: for the bubble sort algorithm\n";
            std::cout << "insertion_sort: for the insertion sort algorithm\n";
            std::cout << "quicksort: for the quicksort algorithm\n";
        }
    }
    else
    {
        std::cout << "Usage:\n";
        std::cout << std::endl;
        std::cout << "./sas.out argv[1]\n";
        std::cout << std::endl;
        std::cout << "where argv[1] can be one of the following:\n";
        std::cout << std::endl;
        std::cout << "linear_search: for the linear search algorithm\n";
        std::cout << "binary_search: for the binary search algorithm\n";
        std::cout << "bubble_sort: for the bubble sort algorithm\n";
        std::cout << "insertion_sort: for the insertion sort algorithm\n";
        std::cout << "quicksort: for the quicksort algorithm\n";
        std::cout << std::endl;
        std::cout << "Example:\n";
        std::cout << "./sas.out binary_search\n";
        std::cout << std::endl;
    }

    return 0;
}
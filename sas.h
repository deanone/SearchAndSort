#ifndef SAS_H
#define SAS_H

#include <vector>

// SAS stands for Search and Sort

namespace sas
{
	bool approximatelyEqual(const double& a, const double& b);
	int linearSearch(const std::vector<double>& arr, const double& key);
	int binarySearch(const std::vector<int>& arr, int start, int end, int key);
	int binarySearch(int arr[], int start, int end, int key);
	void bubbleSort(std::vector<double>& arr);
}

#endif	// SAS_H
#ifndef SORTING_H
#define SORTING_H

#include <vector>

void bubbleSort(std::vector<int>& arr);
void selectionSort(std::vector<int>& arr);
void quickSort(std::vector<int>& arr, int low, int high);
int partition(std::vector<int>& arr, int low, int high);

#endif
#include "Searching.h"

// Linear Search - O(n)
int linearSearch(const std::vector<int>& arr, int key) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1; // Not found
}

// Binary Search - O(log n) - Array harus sudah terurut
int binarySearch(const std::vector<int>& arr, int key) {
    int left = 0;
    int right = arr.size() - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == key) {
            return mid;
        }
        
        if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    
    return -1; // Not found
}
#include <iostream>
#include "graph/Graph.h"
#include "graph/BFS.h"
#include "graph/DFS.h"
#include "sorting/Sorting.h"
#include "searching/Searching.h"
#include "utils/BigO.h"

int main() {
    std::cout << "Welcome to tokojim - Data Structures & Algorithms Demo App\n";

    // --- GRAPH DEMO ---
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    std::cout << "\nGraph adjacency list:\n";
    g.printGraph();

    std::cout << "\nBFS from vertex 0: ";
    BFS(g, 0);

    std::cout << "DFS from vertex 0: ";
    DFS(g, 0);

    // --- SORTING DEMO ---
    std::vector<int> arr = {5, 2, 9, 1, 5, 6};
    std::cout << "\nArray before sorting: ";
    for (int i : arr) std::cout << i << " ";

    bubbleSort(arr);
    std::cout << "\nArray after Bubble Sort: ";
    for (int i : arr) std::cout << i << " ";

    // --- SEARCHING DEMO ---
    int key = 5;
    int idx = linearSearch(arr, key);
    std::cout << "\nLinear Search for " << key << ": Index " << idx << std::endl;

    idx = binarySearch(arr, key);
    std::cout << "Binary Search for " << key << ": Index " << idx << std::endl;

    // --- Big O Notation Info
    std::cout << "\nRefer to utils/BigO.h for time complexity notes.\n";

    return 0;
}
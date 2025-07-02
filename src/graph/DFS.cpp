#include "DFS.h"

// DFS Utility function - rekursif helper
void DFSUtil(const Graph& g, int v, std::vector<bool>& visited) {
    // Mark current vertex as visited and print it
    visited[v] = true;
    std::cout << v << " ";
    
    // Get all adjacent vertices
    const std::list<int>& adjList = g.getAdj(v);
    
    // Recur for all the adjacent vertices that haven't been visited
    for (int adjacent : adjList) {
        if (!visited[adjacent]) {
            DFSUtil(g, adjacent, visited);
        }
    }
}

// DFS traversal starting from given vertex
void DFS(const Graph& g, int start) {
    // Create a visited array and mark all vertices as not visited
    std::vector<bool> visited(g.getVertices(), false);
    
    // Call the recursive helper function to print DFS traversal
    DFSUtil(g, start, visited);
    std::cout << std::endl;
}
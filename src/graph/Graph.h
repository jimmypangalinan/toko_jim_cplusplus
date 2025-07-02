#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <list>
#include <iostream>

class Graph {
private:
    int V;                      // Number of vertices
    std::vector<std::list<int>> adj; // Adjacency list
public:
    Graph(int V);
    void addEdge(int v, int w);
    void printGraph();
    int getVertices() const;
    const std::list<int>& getAdj(int v) const;
};

#endif
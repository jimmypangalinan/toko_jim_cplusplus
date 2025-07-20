#include "Graph.h"

Graph::Graph(int V) : V(V), adj(V) {}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v); // For undirected graph
}

void Graph::printGraph() {
    const std::string storeNames[] = {"Pusat", "Mall", "PIK", "KG", "Bekasi"};
    for (int v = 0; v < V; ++v) {
        std::cout << "Toko " << v << " (" << storeNames[v] << "):";
        for (auto x : adj[v])
            std::cout << " -> " << storeNames[x] << "(" << x << ")";
        std::cout << std::endl;
    }
}

int Graph::getVertices() const {
    return V;
}

const std::list<int>& Graph::getAdj(int v) const {
    return adj[v];
}
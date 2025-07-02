#include "BFS.h"

void BFS(const Graph& g, int start) {
    std::vector<bool> visited(g.getVertices(), false);
    std::queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()) {
        int v = q.front();
        std::cout << v << " ";
        q.pop();

        for (auto adj : g.getAdj(v)) {
            if (!visited[adj]) {
                visited[adj] = true;
                q.push(adj);
            }
        }
    }
    std::cout << std::endl;
}
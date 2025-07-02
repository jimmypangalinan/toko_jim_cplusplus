#ifndef DFS_H
#define DFS_H

#include "Graph.h"
#include <vector>
#include <iostream>

void DFSUtil(const Graph& g, int v, std::vector<bool>& visited);
void DFS(const Graph& g, int start);

#endif
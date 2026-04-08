#ifndef GRAPH_HPP
#define GRAPH_HPP

#include <vector>
#include <queue>

template <typename T>
class Graph
{
    private:
        std::vector<T> verticies;
        std::vector<std::vector<int>> edges;

        int getVertexIndex(const T& value) const;

        void DFS(int i, std::vector<bool>& visited) const;
        
        public:
        void insertVertex(const T& value);
        void insertEdge(const T& v1, const T& v2);
        void print() const;
        
        void DFS() const;
        
        void BFS(int start = 0) const;
        int shortestPath(const T& src, const T& dest) const;

        bool isConnected() const; // TODO: True if all nodes in network can be reached; false if any cannot be reached
};

#include "Graph.tpp"

#endif
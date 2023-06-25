#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;

class Graph {
public:
    // create map form src with neighbours
    unordered_map<int, list<int>> adjList;

    void addEdge(int u, int v, bool direction) {
        // direction = 0 -> undirected
        // direction = 1 -> directed
        
        adjList[u].push_back(v); // Create an edge from u to v
        // if undirected
        if (direction == 0) {
            adjList[v].push_back(u); // edge created from v to u
        }
    }
    void printAdjList() {
        for (auto node : adjList) {
            cout << node.first << " -> ";
            for (auto neighbours : node.second) {
                cout << neighbours << ", ";
            }
            cout << endl;
        }
    }
};
int main() {
    Graph g;
    // undirected graph
    g.addEdge(0, 1, 0);
    g.addEdge(0, 3, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);

    // directed graph
    // g.addEdge(0, 1, 1);
    // g.addEdge(0, 3, 1);
    // g.addEdge(1, 3, 1);
    // g.addEdge(1, 2, 1);
    // g.addEdge(2, 3, 1);

    g.printAdjList();
    return 0;
}
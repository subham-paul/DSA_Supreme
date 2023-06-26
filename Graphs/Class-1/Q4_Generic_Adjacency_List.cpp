#include <iostream>
#include <unordered_map>
#include <list>
using namespace std;
/* Generic Graphs mean here you can make Graph different diffrent
DataType like Strings, Char, Integer */
template <typename T>
class Graph {
public:
    unordered_map<T, list<T>> adjList;
    void addEdge(T u, T v, bool direction) {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        adjList[u].push_back(v); // Create an edge from u to v

        if (direction == 0) { // if unDirected
            adjList[v].push_back(u); // edge created from v to u
        }
    }
    void printAdjList() {
        for (auto node : adjList) {
            cout << node.first << "-> ";
            for (auto neighbours : node.second) {
                cout << neighbours << ", ";
            }
            cout << endl;
        }
    }
};
int main() {
    Graph<string> g;
    /* undirected graph */
    // g.addEdge(0, 1, 0);
    // g.addEdge(0, 3, 0);
    // g.addEdge(1, 3, 0);
    // g.addEdge(1, 2, 0);
    // g.addEdge(2, 3, 0);

    /* directed graph */
    // g.addEdge(0, 1, 1);
    // g.addEdge(0, 3, 1);
    // g.addEdge(1, 3, 1);
    // g.addEdge(1, 2, 1);
    // g.addEdge(2, 3, 1);

    /* directed graph using String datatype */
    g.addEdge("A", "B", 1);
    g.addEdge("A", "D", 1);
    g.addEdge("B", "D", 1);
    g.addEdge("B", "C", 1);
    g.addEdge("B", "D", 1);

    g.printAdjList();
    return 0;
}
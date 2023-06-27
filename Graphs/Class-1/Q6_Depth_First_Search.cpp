#include <iostream>
#include <unordered_map>
#include <list>
/* DFS is same as PreOrder, InOrder Traversal */
/* TC-> O(v+e), SC-> O(v+e) */
using namespace std;
template <typename T>
class Graph {
public:
    unordered_map<T, list<T>> adjList;
    void addEdge(T u, T v, bool direction) {
        // direction = 0 -> undirected
        // direction = 1 -> directed
        // Create an edge from u to v
        adjList[u].push_back(v);
        // if undirected
        if (direction == 0)
            adjList[v].push_back(u); // edge created from v to u
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
    void dfs(int src, unordered_map<int, bool> &visited) {
        cout << src << " ";
        visited[src] = true;
        for (auto neighbour : adjList[src]) {
            if (!visited[neighbour]) {
                dfs(neighbour, visited);
            }
        }
    }
};
int main() {
    Graph<int> g;
    int n = 7; // n-> number of nodes in Graph

    g.addEdge(0, 1, 0);
    g.addEdge(1, 6, 0);
    g.addEdge(1, 4, 0);
    g.addEdge(4, 5, 0);
    g.addEdge(4, 3, 0);
    g.addEdge(3, 2, 0);
    g.addEdge(3, 7, 0);

    unordered_map<int, bool> visited;

    for (int i = 0; i < n; i++) {
        // non visited node treat as a source and traversal every node
        if (!visited[i]) {
            g.dfs(i, visited);
        }
    }
    return 0;
}
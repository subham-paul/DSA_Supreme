#include <iostream>
#include <unordered_map>
#include <list>
#include <queue>
/* BFS is same as Level Order Traversal */
using namespace std;
template <typename T>
class Graph {
public:
    unordered_map<T, list<T>> adjList;
    void addEdge(T u, T v, bool direction) {
        // direction = 0 -> undirected
        // direction = 1 -> directed

        adjList[u].push_back(v); // Create an edge from u to v
        
        if (direction == 0) // if undirected
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
    void bfs(int src, unordered_map<int, bool> &visited) {
        queue<int> q;
        q.push(src);
        visited[src] = true;
        while (!q.empty()) {
            // Front node
            int frontNode = q.front();
            q.pop();
            cout << frontNode;
            // Insert neighbours
            for (auto neighbours : adjList[frontNode]) {
                // If not visited then insert
                if (!visited[neighbours]) {
                    q.push(neighbours);
                    visited[neighbours] = true;
                }
            }
        }
    }
};
int main() {
    Graph<int> g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(3, 5, 0);
    g.addEdge(3, 7, 0);
    g.addEdge(7, 6, 0);
    g.addEdge(7, 4, 0);
    unordered_map<int, bool> visited;
    for (int i = 0; i < 7; i++) {
        if (!visited[i]){
            g.bfs(i, visited);
        }
    }
    return 0;
}
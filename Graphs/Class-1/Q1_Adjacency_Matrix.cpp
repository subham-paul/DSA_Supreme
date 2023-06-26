#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n, e;
    cout << "Enter the number of nodes-> ";
    cin >> n;

    vector<vector<int>> adj(n, vector<int>(n, 0)); // making 2D array using Vector

    cout << "Enter the number of edges-> ";
    cin >> e;

    for (int i = 0; i < e; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1; // mark 1
    }

    // Printing the adjacency matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
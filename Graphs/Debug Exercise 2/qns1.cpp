#include <bits/stdc++.h>
using namespace std;

bool findCycle(Graph const &graph, int n)
{
    // initialize Main class
    DisjointSet ds;

    // create a singleton set for each element of the universe
    ds.MakeSet(n);

    // consider every edge (u, v)
    for (int u = 0; u < n; u++)
    {
        // Recur for all adjacent vertices
        for (int v : graph.adjList[u])
        {
            // find the root of the sets to which elements `u` and `v` belongs
            int x = ds.Find(u);
            int y = ds.Find(v);

            // if both `u` and `v` have the same parent, the cycle is found
            if (x == y)
            {
                return true;
            }
            else
            {
                ds.Union(x, y);
            }
        }
    }

    return false;
}

int main()
{

    return 0;
}
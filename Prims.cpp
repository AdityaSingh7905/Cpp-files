#include <iostream>
#include <vector>
#include <unordered_map>
#include <queue>

using namespace std;

typedef pair<int, pair<int, int>> P;

// Used to find the sum of weights in Minimum Spanning Tree
int prims(vector<vector<int>> &edges, int N)
{
    unordered_map<int, vector<pair<int, int>>> adj;

    for (auto &edge : edges)
    {
        int u = edge[0];
        int v = edge[1];
        int wt = edge[2];

        adj[u].push_back({v, wt});
        adj[v].push_back({u, wt});
    }

    vector<bool> inMST(N, false);
    vector<int> parent(N, -1);

    priority_queue<P, vector<P>, greater<P>> pq; // min Heap declaration

    int sum = 0;
    // starting with zero

    pq.push({0, {0, -1}});

    while (!pq.empty())
    {
        auto tp = pq.top();
        pq.pop();

        int wt = tp.first;
        int node = tp.second.first;
        int pnt = tp.second.second;

        if (inMST[node])
            continue;

        sum += wt;
        inMST[node] = true;
        parent[node] = pnt;

        for (auto vec : adj[node])
        {
            int v = vec.first;
            int wgt = vec.second;
            if (!inMST[v])
            {
                pq.push({wgt, {v, node}});
            }
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << "isMST: " << inMST[i];
        cout << " Parent: " << parent[i];
        cout << endl;
    }

    return sum;
}

int main()
{
    int n = 7;
    vector<vector<int>> edges = {{0, 1, 5},
                                 {0, 3, 20},
                                 {1, 2, 5},
                                 {2, 3, 5},
                                 {3, 4, 1},
                                 {4, 5, 2},
                                 {4, 6, 4},
                                 {5, 6, 2}};

    int maxWt = prims(edges, n);

    cout << "Total sum of weigts of edges on Minimum Spanning Tree is: ";
    cout << maxWt << endl;
}
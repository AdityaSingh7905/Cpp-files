#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;

class DSU
{
public:
    vector<int> parent;
    vector<int> rank;

    DSU(int n){
        parent.resize(n);
        rank.resize(n, 0);

        for(int i=0; i<n; i++){
            parent[i] = i;
        }
    }

    int find(int x)
    {
        if (x == parent[x])
        {
            return x;
        }
        return parent[x] = find(parent[x]);
    }

    void Union(int x, int y)
    {
        int x_parent = find(x);
        int y_parent = find(y);

        if (x_parent == y_parent)
        {
            return;
        }

        if (rank[x_parent] > rank[y_parent])
        {
            parent[y_parent] = x_parent;
            rank[x_parent]++;
        }
        else if (rank[y_parent] > rank[x_parent])
        {
            parent[x_parent] = y_parent;
            rank[y_parent]++;
        }
        else
        {
            parent[y_parent] = x_parent;
            rank[x_parent]++;
        }
    }
};

int kruskals(vector<vector<int>> &edges, int n)
{
    DSU uf(n);
    // we have to sort edges based on the weights
    auto comp = [&](vector<int> &vec1, vector<int> &vec2)
    {
        return vec1[2] < vec2[2];
    };

    sort(edges.begin(), edges.end(), comp);

    int sum = 0;

    for (int i = 0; i < edges.size(); i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];
        int wt = edges[i][2];

        int u_parent = uf.find(u);
        int v_parent = uf.find(v);

        if (u_parent == v_parent)
        {
            continue;
        }

        uf.Union(u_parent, v_parent);
        sum += wt;
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

    int maxWt = kruskals(edges, n);

    cout << "Total sum of weigts of edges on Minimum Spanning Tree is: ";
    cout << maxWt << endl;
}
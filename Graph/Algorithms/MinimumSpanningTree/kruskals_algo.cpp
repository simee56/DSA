// Kruskal's Algorithm

#include<iostream>
#include<vector>
#include<queue>
#include<tuple>
using namespace std;

int findParent(int u, vector<int> &parent) {
    if(u == parent[u]) return u;
    return parent[u] = findParent(parent[u], parent);
};

void unionByrank(int u, int v, vector<int> &parent, vector<int> &rank) {
    int pu = findParent(u, parent);
    int pv = findParent(v, parent);

    if (pu == pv) return; // already in the same set

    // Merge the set with lower rank into the one with higher rank
    if(rank[pu] < rank[pv]) parent[pv] = pu;
    else if(rank[pu] > rank[pv]) parent[pu] = pv;
    else {
        parent[pv] = pu;
        rank[pu]++;
    }
}

int main()
{
    int V, E;
    cout << "Enter the value of vertices : ";
    cin >> V;
    cout << "Enter the value of edges : ";
    cin >> E;
    cout << endl;

    // Creating adjaceny list
    vector<pair<int, int>> AdjList[V];

    int u, v, weight;
    cout << "Explain how the edges are going to connect : ";
    for(int i = 0; i < E; i++) {
        cin >> u >> v >> weight;
        AdjList[u].push_back(make_pair(v, weight));
        AdjList[v].push_back(make_pair(u, weight));
    }

    vector<int> parent(V, 0);
    vector<int> rank(V, 0);

    for(int i = 0; i < V; i++)
    parent[i] = i;

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;

    for(int i = 0; i < V; i++) {
        for(int j = 0; j < AdjList[i].size(); j++) {
            pq.push({AdjList[i][j].second, i, AdjList[i][j].first});  // weight, u -> v
        }
    }

    int cost = 0;
    int edgeCount = 0;
    vector<pair<int, int>> mstEdges;

    while(!pq.empty() && edgeCount < V -1) {
    int wt = get<0>(pq.top());
    int uu = get<1>(pq.top());
    int vv = get<2>(pq.top());

        pq.pop();
        
        // Check if they lie in a same set
        if(findParent(uu, parent) != findParent(vv, parent)) {
            cost += wt;
            unionByrank(uu, vv, parent, rank);
            mstEdges.push_back({uu, vv});
            edgeCount++;
        }
    }

    cout << "\nMST edges:\n";
    for(int i = 0; i < mstEdges.size(); i++) {
        cout << mstEdges[i].first << " - " << mstEdges[i].second << endl;
    }

    cout << "\nThe cost of this MST is : " << cost << endl;
}
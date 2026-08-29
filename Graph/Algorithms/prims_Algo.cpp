// Prims Alorithm is a greedy algo used to find the Minimum spanning tree 
// for a connected, wiehgted and undirected graph.


#include<iostream>
#include<vector>
#include <queue>
#include <tuple>
using namespace std;

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

    vector<bool> visited(V);
    vector<int> parent(V);
    int cost = 0;

    int node;
    cout << "Enter the value of starting node : ";
    cin >> node;

    priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>, greater<>> pq;
    pq.push(make_tuple(0, node, -1));   // Weight, node, parent

    while(!pq.empty())
    {
        tuple<int,int,int> top = pq.top();
        pq.pop();

        int wt = get<0>(top);
        int currNode = get<1>(top);
        int currParent = get<2>(top);

        if (visited[currNode]) continue;
        visited[currNode] = 1;
        parent[currNode] = currParent;
        cost += wt;

    for (int j = 0; j < AdjList[currNode].size(); j++) {
            int next = AdjList[currNode][j].first;
            int edgeWeight = AdjList[currNode][j].second;
            if (!visited[next])
                pq.push(make_tuple(edgeWeight, next, currNode));
        }
    }

    cout << "\nMST edges:\n";
    for(int i = 0; i < V; i++) {
       if (parent[i] != -1)
            cout << parent[i] << " - " << i << endl;
    }

    cout << "\nThe cost of this MST is : " << cost << endl;
}
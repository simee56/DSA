// To reduce the time complexity we'll use Priority_Queue
#include<iostream>
#include<vector>
#include<climits>
#include<queue>
using namespace std;

vector<int> Dijkstra(int V, vector<vector<pair<int,int>>> &adj, int src) 
{
    vector<bool> Explored(V, false);
    vector<int> distance(V, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
    pq.push({0, src});

    while(!pq.empty()) {
        auto [w, u, v] = pq.front();
        pq.pop();

        if(!Explored[u] == 1)
            continue;

        Explored[u] = 1;

        for (auto &[neighbor, weight] : adj[node]) {
            if (!Explored[neighbor] &&
                distance[node] != INT_MAX &&
                distance[node] + weight < distance[neighbor]) {
                distance[neighbor] = distance[node] + weight;
                pq.push({distance[neighbor], neighbor})
            }
        }

        return distance;

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

    // Step 1: take input as an edge list -> {u, v, weight}
    vector<vector<int>> edges(E, vector<int>(3));
    cout << "Enter each edge as: u v weight\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i][0] >> edges[i][1] >> edges[i][2];
    }

    // Step 2: convert edge list into adjacency list
    vector<vector<pair<int,int>>> adj(V); 
    for (auto &e : edges) {
        int u = e[0], v = e[1], w = e[2];
        adj[u].push_back({v, w});
        adj[v].push_back({u, w}); 
    }

    int src;
    cout << "Enter source vertex : ";
    cin >> src;

    vector<int> distance = Dijkstra(V, adj, src);

    cout << "\nShortest distances from source " << src << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << ": ";
        if (distance[i] == INT_MAX) cout << "unreachable\n";
        else cout << distance[i] << "\n";
    }

    return 0;
}
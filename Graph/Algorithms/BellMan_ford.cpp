#include <iostream>
#include <vector>
#include <climits>
using namespace std;

struct Edge {
    int u, v, w;
};

vector<int> BellmanFord(int V, vector<Edge> &edges, int src) {
    vector<int> distance(V, INT_MAX);
    distance[src] = 0;

    int E = edges.size();

    // Relax all edges V-1 times
    for (int i = 0; i < V - 1; i++) {
        bool flag = false;

        for (int j = 0; j < E; j++) {
            int u = edges[j].u;
            int v = edges[j].v;
            int w = edges[j].w;

            if (distance[u] == INT_MAX) continue;

            if (distance[u] + w < distance[v]) {
                distance[v] = distance[u] + w;
                flag = true;
            }
        }
        if (!flag) break; // no update -> converged early
    }

    // One more pass to detect negative-weight cycle
    for (int j = 0; j < E; j++) {
        int u = edges[j].u;
        int v = edges[j].v;
        int w = edges[j].w;

        if (distance[u] != INT_MAX && distance[u] + w < distance[v]) {
            cout << "Graph contains a negative weight cycle\n";
            return vector<int>(1, -1); // sentinel: no valid answer
        }
    }

    return distance;
}

int main() {
    int V, E;
    cout << "Enter the value of vertices : ";
    cin >> V;
    cout << "Enter the value of edges : ";
    cin >> E;
    cout << endl;

    vector<Edge> edges(E);
    cout << "Enter each edge as: u v weight\n";
    for (int i = 0; i < E; i++) {
        cin >> edges[i].u >> edges[i].v >> edges[i].w;
    }

    int src;
    cout << "Enter source vertex : ";
    cin >> src;

    vector<int> distance = BellmanFord(V, edges, src);

    if (distance.size() == 1 && distance[0] == -1) {
        return 0; // negative cycle message already printed
    }

    cout << "\nShortest distances from source " << src << ":\n";
    for (int i = 0; i < V; i++) {
        cout << "Node " << i << ": ";
        if (distance[i] == INT_MAX) cout << "unreachable\n";
        else cout << distance[i] << "\n";
    }

    return 0;
}
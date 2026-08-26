#include <iostream>
#include <vector>
#include <climits>
using namespace std;

const int INF = INT_MAX;

void Floyd_Warshall(vector<vector<int>> &matrix, vector<vector<int>> &next, int n) {
    // Initialize next[i][j] = j if there's a direct edge i -> j
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && matrix[i][j] != INF)
                next[i][j] = j;
        }
    }

    for (int k = 0; k < n; k++) {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][k] == INF || matrix[k][j] == INF) continue;

                if (matrix[i][k] + matrix[k][j] < matrix[i][j]) {
                    matrix[i][j] = matrix[i][k] + matrix[k][j];
                    next[i][j] = next[i][k]; 
                }
            }
        }
    }
}

// Reconstruct path from u to v using the next matrix
vector<int> getPath(int u, int v, vector<vector<int>> &next) {
    vector<int> path;
    if (next[u][v] == -1) return path; // no path exists

    path.push_back(u);
    while (u != v) {
        u = next[u][v];
        path.push_back(u);
    }
    return path;
}

int main() {
    int n;
    cout << "Enter the number of vertices : ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Fill the weights in the matrix (use a large number like 100000 for no edge, 0 on diagonal) : \n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int val;
            cin >> val;
            matrix[i][j] = (val == 100000) ? INF : val;
        }
    }

    vector<vector<int>> next(n, vector<int>(n, -1));

    Floyd_Warshall(matrix, next, n);

    // Print the shortest distance matrix
    cout << "\nShortest distance matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == INF) cout << "INF ";
            else cout << matrix[i][j] << " ";
        }
        cout << "\n";
    }

    // Print the actual shortest path between every pair
    cout << "\nShortest paths:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) continue;

            if (matrix[i][j] == INF) {
                cout << "No path from " << i << " to " << j << "\n";
                continue;
            }

            vector<int> path = getPath(i, j, next);
            cout << "Path from " << i << " to " << j << " (dist = " << matrix[i][j] << "): ";
            for (int idx = 0; idx < path.size(); idx++) {
                cout << path[idx];
                if (idx != path.size() - 1) cout << " -> ";
            }
            cout << "\n";
        }
    }

    return 0;
}
// Representation of Graph using adjaceny matrix
// Directed weighted graph

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int vertex, edges;
    cout << "Enter the value of vertices : ";
    cin >> vertex;
    cout << "Enter the value of edges : ";
    cin >> edges; 
    cout << endl;

    vector<vector<int>> AdjMat(vertex, vector<int>(vertex, 0));

    int u, v, weight;
    cout << "Explain how the edges are going to connect alog with their weight: ";
    for(int i = 0; i < edges; i++) {
        cin >> u >> v >> weight;
        AdjMat[u][v] = weight;
    }

    cout << "\nGraph using Adjaceny Matrix is : ";
    for(int i = 0; i < vertex; i++) {
        for(int j = 0; j < vertex; j++) 
            cout << AdjMat[i][j] << " ";

        cout << endl;
    }
}
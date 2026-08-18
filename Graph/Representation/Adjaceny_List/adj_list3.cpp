// Representation of a graph using Adjaceny List
// Directed Unweighted graph

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

    // Creating adjaceny list
    vector<int> AdjList[vertex];

    int u, v;
    cout << "Explain how the edges are going to connect : ";
    for(int i = 0; i < edges; i++) {
        cin >> u >> v;
        AdjList[u].push_back(v);
    }

    for(int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for(int j = 0; j < AdjList[i].size(); j++)
        cout << AdjList[i][j] << " ";

        cout << endl;
    }
}
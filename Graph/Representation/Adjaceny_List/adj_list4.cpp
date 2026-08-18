// Representation of a graph using Adjaceny List
// Directed Weighted graph

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
    vector<pair<int, int>> AdjList[vertex];

    int u, v, weight;
    cout << "Explain how the edges are going to connect : ";
    for(int i = 0; i < edges; i++) {
        cin >> u >> v >> weight;
        AdjList[u].push_back(make_pair(v, weight));
    }

    for(int i = 0; i < vertex; i++) {
        cout << i << " -> ";
        for(int j = 0; j < AdjList[i].size(); j++)
        cout << AdjList[i][j].first << " " << AdjList[i][j].second << " ";

        cout << endl;
    }
}
#include<iostream>
#include<vector>
#include<stack>
using namespace std;

void DFS1(int node, vector<vector<int>> &AdjList, vector<bool> &visited, stack<int> &st) {
    visited[node] = 1;

    for(int j = 0; j < AdjList[node].size(); j++) {
        int neighbor = AdjList[node][j];

        if(!visited[neighbor]) 
            DFS1(neighbor, AdjList, visited, st);   
    }

    st.push(node);
}

void DFS2(int node, vector<vector<int>> &TransposedList, vector<bool> &visited) {
    visited[node] = 1;

    for(int j = 0; j < TransposedList[node].size(); j++) {
        int neighbor = TransposedList[node][j];

        if(!visited[neighbor])
            DFS2(neighbor, TransposedList, visited);
    }
}

int main() 
{
    int V, E;
    cout << "Enter the number of Vertices : ";
    cin >> V;
    cout << "Enter the number of Edges : ";
    cin >> E;
    cout << endl;

    vector<vector<int>> AdjList(V);
    vector<pair<int,int>> edges(E);  

    int u, v;
    cout << "Explain how the edges are going to connect : " << endl;
    for(int i = 0; i < E; i++) {
        cin >> u >> v;
        AdjList[u].push_back(v);
        edges[i] = {u, v};
    }

    // Print the adjaceny list
    cout << "The adjaceny list is : ";
    for(int i = 0; i < V; i++) {
        cout << i << " -> ";
        for(int j = 0; j < AdjList[i].size(); j++)
        cout << AdjList[i][j] << " ";

        cout << endl;
    }

    cout << endl;

    vector<bool> visited(V, 0);
    stack<int> st;

    // Step 1: Topological sort(DFS Traversal)
    for(int i = 0; i < V; i++) {
        if(!visited[i])
            DFS1(i, AdjList, visited, st);
    }

    // Reverse the edges 
    vector<vector<int>> TransposedList(V);
    for(int i = 0; i < E; i++) {
        int a = edges[i].first;
        int b = edges[i].second;
        TransposedList[b].push_back(a);
    }

    // Print the transposed List
    cout << "The Transposed list is : ";
    for(int i = 0; i < V; i++) {
        cout << i << " -> ";
        for(int j = 0; j < TransposedList[i].size(); j++)
        cout << TransposedList[i][j] << " ";

        cout << endl;
    }

    cout << endl;

    // Make all the nodes unvisited for the second DFS pass
    fill(visited.begin(), visited.end(), 0);

    // Pop the elements from the stack to get the SCC in the correct order 
    int SCC = 0;
    while(!st.empty()) {
        int node = st.top();
        st.pop();

        if(!visited[node]) {
            DFS2(node, TransposedList, visited);
            SCC++;
        }
    }

     cout << "Number of Strongly Connected Components: " << SCC << endl;

}














 
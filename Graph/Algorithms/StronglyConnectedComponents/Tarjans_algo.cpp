#include<iostream>
#include<stack>
#include<vector>
using namespace std;

void DFS(int node, vector<vector<int>> &AdjList, vector<int> &discoveryTime, vector<int> &low, vector<bool> &visited, stack<int> &st, vector<bool> &InStack, int &time, int &SCC) {
    visited[node] = 1;
    discoveryTime[node]  = low[node]  = time++;
    st.push(node);
    InStack[node] = true;

    for(int j = 0; j < AdjList[node].size(); j++) {
        int neighbor = AdjList[node][j];

        // Case 1: Neighbor is not visited
        if(!visited[neighbor]) {
            DFS(neighbor, AdjList, discoveryTime, low, visited, st, InStack, time, SCC);
            low[node] = min(low[node], low[neighbor]);
        }

        // Case 2 : Neighbor is visited and still in the stack
        else if(InStack[neighbor]) {
            low[node] = min(low[node], discoveryTime[neighbor]);
        }
    }
    // If node is root of an SCC
    if(low[node] ==  discoveryTime[node]) {
        cout << "SCC : ";

        while(st.top() != node) {
            int topNode = st.top();
            st.pop();

            InStack[topNode] = false;
            cout << topNode << " ";
        }   
        // Pop the root node
        st.pop();
        InStack[node] = false;

        cout << node << endl;
        SCC++;
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
    int u, v;
    cout << "Explain how the edges are going to connect : " << endl;
    for(int i = 0; i < E; i++) {
        cin >> u >> v;
        AdjList[u].push_back(v);
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

    vector<int> discoveryTime(V, -1);
    vector<int> low(V, -1);
    vector<bool> visited(V);
    stack<int> st;
    vector<bool> InStack(V);
    int time = 0;
    int SCC = 0;

    for(int i = 0; i < V; i++) {
        if(!visited[i])
            DFS(i, AdjList, discoveryTime, low, visited, st, InStack, time, SCC);
    }

    cout << "Number of Strongly Connected Components: " << SCC << endl;
}
//cycle detection
#include<iostream>
#include<vector>
using namespace std;
void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
} 

void dfs(vector <int> adj[],int j,vector<bool>& visited)
{
    visited[j] = true;
    cout << j << " ";
    for(int i=0; i<adj[j].size(); i++)
    {
       if(visited[i] == false)
            dfs(adj,i,visited);
    }
}
int main()
{
    int v;
    cout<<"Enter the number of vertices"<<endl;
    cin>>v;
    vector<int> adj[v];
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    vector<bool> visited(v, false);
    dfs(adj,0,visited);
}
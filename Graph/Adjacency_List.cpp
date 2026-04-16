#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the number of Nodes:";
    cin>>n;
    cout<<"Enter the number of Edges:";
    cin>>m;
    vector<int> adj[n+1];
    for(int i=0;i<m;i++){
        int u,v;
        cout<<"Enter the edge between u and v:";
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u); //Undirected Graph
        // adj[u].push_back(v); //Directed Graph
    }
}
// Adjacency List is used to represent the graph in a more space efficient way, especially when the graph is sparse (i.e., has fewer edges compared to the number of vertices). Each vertex maintains a list of its adjacent vertices, which allows for efficient traversal and storage.    
// Its better than Adjacency Matrix when the graph has a large number of vertices and relatively few edges, as it only stores the existing edges rather than all possible edges.
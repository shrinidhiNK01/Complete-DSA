#include<bits/stdc++.h>
using namespace std;
//BFS:- Immediate Neighbors stored  , Created using Queue
class Graph{
    public:
    int Vertex;
    list<int> *adj;
    Graph(int Vertex){
        this->Vertex=Vertex;
        adj=new list<int>[Vertex];

    }
    void addEdges(int u, int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    void printGraph(){
        for(int i=0;i<Vertex;i++){
            cout<<i<<"-->";
            for(int j:adj[i]){
                cout<<j<<" ";
            }
            cout<<endl;
        }
    }

    //BFS Traversal
    //source=u, destination=v
    void BFS(int src){
        queue<int> q;
        vector<bool> vis(Vertex,false);
        q.push(src);
        vis[src]=true;

        // u=src, v=destination
        while(!q.empty()){
            int u=q.front();
            q.pop();
            cout<<u<<" ";
            for(int i:adj[u]){ //i=>immediate neighbour
                if(!vis[i]){
                    vis[i]=true;
                    q.push(i);
                }
            }
        }
        cout<<endl;
        }

};
int main(){
Graph g(6);

g.addEdges(1,5);
g.addEdges(5,3);
g.addEdges(3,2);
g.addEdges(2,4);
g.addEdges(4,5);

// g.printGraph();

g.BFS(1); //=>O(V+E)

return 0;
}
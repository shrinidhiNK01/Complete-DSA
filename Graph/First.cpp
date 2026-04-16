#include<bits/stdc++.h>
using namespace std;
class Graph{
     public:
     int Vertex;
     list<int> *adj;

     Graph(int Vertex){
          this->Vertex=Vertex;
          adj=new list<int>[Vertex];
     }
     //Undirected Graph
     void addEdges(int u, int v){
          adj[u].push_back(v);  //1-->(2,3,4) ==> Neighboring Vertices
          adj[v].push_back(u);  //2--->(1)==>Neighboring Vertices

     }
     // Directed Graph 

     // void addEdges(int u, int v){
     //      adj[u].push_back(v);  //1-->(2,3,4) ==> Neighboring Vertices

     // }
     void printAdjList(){
          for(int i=0;i<Vertex;i++){
               cout<<i<<"-->";
               for(list<int>::iterator it = adj[i].begin(); it != adj[i].end(); ++it){
                    cout<<*it<<" ";
               }
               cout<<endl;
          }
     }

};
int main(){
   //Adjecency List Representation
   Graph g(6); // 0,1,2,3,4
   g.addEdges(1,5);
   g.addEdges(5,3);
   g.addEdges(3,2);
   g.addEdges(2,4);
   g.addEdges(4,5);

   g.printAdjList();
   return 0;
}
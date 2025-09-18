#include <iostream>
#include <list>  //doubly linked list

using namespace std;

class Graph
{
   int V;
   list<int> *l;
   public:
   Graph(int v){
       this->V= v;
       l = new list<int>[V];
   }

   void AddEdge(int u, int v){
       l[u].push_back(v);
       l[v].push_back(u);
   }

   void loop(){
       for(int i=0 ; i<V; i++){
        cout << i << "->";
        for(int nbr: l[i]){
            cout << nbr << " ";
        }
        cout<< endl;
       } 
   }
};

int main(){
    Graph g(5);
    g.AddEdge(0,1);
    g.AddEdge(0,4);
    g.AddEdge(1,2);
    g.AddEdge(2,3);
    g.AddEdge(3,4);
    g.loop();
    return 0;
}
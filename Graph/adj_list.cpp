#include<iostream>
#include<unordered_map>
#include<list>

using namespace std;
class Graph
{
    public:
  unordered_map<int,list<int>>adj;
  void addEdges(int u, int v, bool direction)
  {
    // if direction is 0 then undirected graph
    // if direction is 1 the directed graph
    // creating and edge form u to v
     adj[u].push_back(v);
     if(direction==0)
     {
        adj[v].push_back(u);
     }
  }
  void printAdjList()
  {
    for(auto i:adj)
    {
        cout<<i.first<<" ->";
        for(auto j:i.second)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
  }


};
int main()
{
    int n;
    cout<<"Enter the number of nodes"<<endl;
    cin>>n;
    int m;
    cout<<"Enter the number of edges"<<endl;
    cin>>m;
    Graph g;
    for(int i=0;i<m;i++)
    {
        int u,v;
        cin>>u>>v;
        g.addEdges(u,v,0);
    }
    g.printAdjList();
}
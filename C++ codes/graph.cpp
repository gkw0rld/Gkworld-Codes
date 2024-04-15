#include<iostream>
#include<unordered_map>
#include<list>
using namespace std;

class Graph
{
    public:
    unordered_map<int, list<int>> adjList;
    void addEdge(int u, int v, bool direction)
    {
        //direction = 0 undirected
        //direction = 1 directed

        if(direction == 1)
        {
            //u se v ki taraf ek edge h
            // u->v
            adjList[u].push_back(v);
        }
        else
        {
            //direction = 0
            //u--v
            //u->v
            adjList[u].push_back(v);

            //v->u
            adjList[v].push_back(u);
        }
        cout<<endl<<"Printing adjlist"<< endl;
        printAdjList();
        cout<<endl;
    }

    void printAdjList()
    {
        for(auto i: adjList)
        {
            cout<<i.first<<"->{";
            for(auto neighbour: i.second)
            {
                cout<<neighbour<<", ";

            }
            cout<<"}"<<endl;
        }
    }

};

int main()
{
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(2, 3, 0);
    return 0;
}
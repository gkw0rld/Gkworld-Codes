#include<iostream>
#include<unordered_map>
#include<list>
#include<queue>
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

    bool checkCycleUndirectedBFS(int src)
    {
        queue<int> q;
        unordered_map<int, bool> visited;
        unordered_map<int, int> parent;

        //initial state
        q.push(src);
        visited[src] = true;
        parent[src] = -1;

        //logic
        while(!q.empty())
        {
            int frontNode = q.front();
            q.pop();

            for(auto nbr: adjList[frontNode])
            {
                if(!visited[nbr])
                {
                    q.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontNode;
                }
                else if(visited[nbr] == true && nbr != parent[frontNode])
                {
                    return true;
                }
            }
        }
        //loop se bahar aa gaye matlb cycle not present 
        return false;
    }

};

int main()
{
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(1, 3, 0);
    g.addEdge(2, 4, 0);
    g.addEdge(3, 4, 0);  
    g.addEdge(2, 5, 0);

    int src = 0;
    bool isCyclic = g.checkCycleUndirectedBFS(src);
    if(isCyclic)
    {
        cout<<"Cycle Present"<<endl;
    }

    else
    {
        cout<<"Cycle Not Present"<<endl;
    }


    return 0;
}
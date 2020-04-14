#include <iostream>
#include <vector>
#include <cstring>

using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    bool *visited;

    public:
    Graph(int V){
        this->V = V;
        adj = new vector<int>[V];
    }
    void addEdge(int v, int w){
        adj[v].push_back(w);
    }
    // connected graph
    void DFS(int v){
        visited = new bool[V];
        memset(visited, false, V);
        DFS_recur(v, visited);
        cout << endl;
    }
    //disconnected graph
    void DFS(){
        visited = new bool[V];
        memset(visited, false, V);
        for(int i=0; i<V; i++){
            if(visited[i]==false){
                DFS_recur(i, visited);
            }
        }
        cout << endl;
    }
    void DFS_recur(int v, bool* visited){
        cout << v << '\t';
        visited[v] = true;

        for(auto vi: adj[v]){
            if(!visited[vi]){
                DFS_recur(vi, visited);
            }
        }
    }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 3);
    g.addEdge(1, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 0);
    g.addEdge(3, 1);
    g.addEdge(3, 2);

    g.DFS();

}

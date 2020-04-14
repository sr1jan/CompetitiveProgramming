#include <iostream>
#include <vector>
#include <queue>
#include <cstring>

using namespace std;

class Graph{
    int V;
    vector<int> *adj;
    queue<int> q;
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
    void BFS(int v){
        visited = new bool[V];
        memset(visited, false, V);
        visited[v] = true;
        q.push(v);
        while(!q.empty()){
            int v = q.front();
            cout << v << '\t';
            q.pop();
            for(auto vi: adj[v]){
                if(!visited[vi]){
                    visited[vi]=true;
                    q.push(vi);
                }
            }
        }
        cout << endl;
    }
    // disconnected graph
    void BFS(){
        visited = new bool[V];
        memset(visited, false, V);
        for(int i=0; i<V; i++){
            if(visited[i] == false){
                visited[i] = true;
                q.push(i);
                while(!q.empty()){
                    int v = q.front();
                    cout << v << '\t';
                    q.pop();
                    for(auto vi: adj[v]){
                        if(!visited[vi]){
                            visited[vi]=true;
                            q.push(vi);
                        }
                    }
                }
            }
        }
        cout << endl;
    }
};

int main(){
    Graph g(4);
    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 

    g.BFS(2);
    g.BFS();

}

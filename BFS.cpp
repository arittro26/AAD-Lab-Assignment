#include <iostream>
#include <queue>
using namespace std;
const int MAX = 100;
int adj[MAX][MAX];
bool visited[MAX];
void bfs(int start, int nodes) {
    queue<int> q;
    visited[start] = true;
    q.push(start);
    cout << "BFS Traversal starting from node " << start << ": ";
    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";
        for (int i = 0; i < nodes; i++) {
            if (adj[node][i] == 1 && !visited[i]) {
                visited[i] = true;
                q.push(i);
            }
        }
    }
    cout << endl;
}

int main() {
    int nodes, edges;
    cout << "Enter number of nodes and edges: ";
    cin >> nodes >> edges;
    for (int i = 0; i < nodes; i++) {
        visited[i] = false;
        for (int j = 0; j < nodes; j++) {
            adj[i][j] = 0;
        }
    }
    cout << "Enter edges (u v):\n";
    for (int i = 0; i < edges; i++) {
        int u, v;
        cin >> u >> v;
        adj[u][v] = 1;
        adj[v][u] = 1;
    }
    int start;
    cout << "Enter starting node for BFS: ";
    cin >> start;
    bfs(start, nodes);
    return 0;
}

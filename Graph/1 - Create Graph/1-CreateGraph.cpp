#include<bits/stdc++.h>
using namespace std;

void usingAdjacencyMatrix() {
    int v,e;
    cin>>v>>e;

    int matrix[v+1][v+1];
    for (int i=0;i<v+1;++i)
        for (int j=0;j<v+1;j++)
            matrix[i][j]=0;

    
    for (int i=0;i<e;++i) {
        int x,y;
        cin>>x>>y;

        matrix[x][y]=1, matrix[y][x]=1;
    }

    
    for (int i=1;i<v+1;++i) {
        for (int j=1;j<v+1;j++)
            cout << matrix[i][j] << " ";
        cout << endl;
    }
            
}
void usingAdjacencyList() {
    int v,e;
    cin>>v>>e;

    vector<int> g[v+1];
    for (int i=0;i<e;++i) {
        int x,y;
        cin>>x>>y;

        g[x].emplace_back(y);
        g[y].emplace_back(x);
    }

    for (int i=1;i<=v;++i) {
        cout << i << "==>";
        for (int j=0;j<g[i].size();j++) {
            cout << g[i][j] << " ";
        }
        cout << endl;
    }
}
int main() {
    usingAdjacencyList();
    usingAdjacencyMatrix();
}
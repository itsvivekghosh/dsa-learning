#include<bits/stdc++.h>
using namespace std;

vector<int> getAnswer(vector<int> arr[], int V, int E) {
    vector<int> ans;
    queue<int> q;
    q.push(0);
    map<int, bool> visited;
    visited[0]=true;

    while (!q.empty()) {
        int frontData=q.front();
        q.pop();
        ans.push_back(frontData);

        for (auto x: arr[frontData]) {
            if (!visited[x]) {
                visited[x]=true;
                q.push(x);
            }
        }
    }
    return ans;
}

int main() {
    int v,e;
    cin>>v>>e;

    vector<int> g[v+1];
    for (int i=0;i<e;++i) {
        int x,y;
        cin>>x>>y;

        g[x].emplace_back(y);
        g[y].emplace_back(x);
    }

    vector<int> ans=getAnswer(g, v, e);
    for (auto a: ans) {
        cout << a << " ";
    }
}

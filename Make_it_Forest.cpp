#include <bits/stdc++.h> // include all standard headers
using namespace std;

#define ll long long
#define ld long double
#define pii pair<int, int>
#define mp make_pair
#define pb push_back
#define eb emplace_back
#define fi first
#define se second

const int INF = 1e9;
const ll INFLL = 1e18;
const int MOD = 1e9 + 7;

void dfs(int node, vector<vector<int>>& adj, vector<bool>& vis) {
    vis[node] = true;
    for (int child : adj[node]) {
        if (!vis[child])
            dfs(child, adj, vis);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m;
    cin>>n>>m;
    vector<vector<int>>adjlist(n);
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        adjlist[x-1].push_back(y-1);
        adjlist[y-1].push_back(x-1);
    }
    vector<bool>visited(n,0);
    int count=0;
    for(int i=0; i<n; i++){
        if(!visited[i]){
            count++;
            dfs(i,adjlist,visited);
        }
    }
    cout<<m-(n-count)<<endl;
    return 0;
}
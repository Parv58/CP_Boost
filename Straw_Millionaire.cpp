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

void dfs(vector<vector<int>>&v, int& count, vector<bool>&visited){
    visited[1]=1;
    queue<int>q;
    q.push(1);
    while(!q.empty()){
        int x= q.front();
        q.pop();
        for(int i=0; i<v[x].size(); i++){
            if(!visited[v[x][i]]){
                q.push(v[x][i]);
                count++;
                visited[v[x][i]]=1;
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<vector<int>>v(n+1);
    for(int i=0; i<m; i++){
        int x,y;
        cin>>x>>y;
        v[x].push_back(y);
    }
    int count=1;
    vector<bool>visited(n+1,0);
    dfs(v,count, visited);
    cout<<count<<endl;
    
    return 0;
}
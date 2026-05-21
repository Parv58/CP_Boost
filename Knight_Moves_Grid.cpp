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

void chess(int n, vector<vector<int>>&v){
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    v[i][j] = -1;

    v[0][0]=0;
    int dx[8]={-1,1,-1,1,2,-2,2,-2};
    int dy[8]={2,2,-2,-2,1,1,-1,-1};
    queue<pair<int,int>>q;
    q.push({0,0});
    while(!q.empty()){
        int x=q.front().first;
        int y= q.front().second;
        q.pop();
        for(int i=0; i<8; i++){
            if(x+dx[i]<n && x+dx[i]>=0 &&y+dy[i]>=0 &&y+dy[i]<n && v[x+dx[i]][y+dy[i]]==-1){
                v[x+dx[i]][y+dy[i]]=v[x][y]+1;
                q.push({x+dx[i], y+dy[i]});
            }
        }
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
   vector<vector<int>> v(n, vector<int>(n, -1));
   chess(n, v);
   
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
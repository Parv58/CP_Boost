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

void dfs(vector<string>&v, vector<string>& p, int count, int k, string x){
    if(count==k) {
        p.push_back(x);
        return;
    }
    for(int i=0; i<v.size(); i++){
        dfs(v,p,count+1, k,x+v[i]);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,x;
    cin>>n>>k>>x;
    vector<string>v(n);
    for(int  i=0; i<n; i++){
        cin>>v[i];
    }
    vector<string>p;
    dfs(v,p,0,k,"");
    sort(p.begin(), p.end());
    cout<<p[x-1]<<endl;
    
    return 0;
}
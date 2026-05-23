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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
        int n,x;
        cin>>n>>x;
        vector<int>v(n);
        vector<int>dp(x+1,INF);
        dp[0]=0;
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        for(int i=1; i<=x; i++){
            for(int j=0; j<n; j++){
                if(v[j]<=i && dp[i-v[j]]!=INF)
                dp[i]=min(dp[i], dp[i-v[j]]+1);
            }
        }
        if(dp[x]==INF) cout<<-1<<endl;
        else cout<<dp[x]<<endl;

    
    return 0;
}
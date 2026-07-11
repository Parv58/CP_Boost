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
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int>dp(x+1,0);
    dp[0]=1;
    for(int i=1; i<x+1; i++){
        for(int j=0; j<n; j++){
            if( i>=v[j]){
                dp[i]=((dp[i]+dp[i-v[j]]))%MOD;
            }
        }
    }
    cout<<dp[x]<<endl;

    
    return 0;
}



/*The main intuition behind this problem is 31st line, this is a must revise question for dp, because deriving this 
intuition is actually good level*/

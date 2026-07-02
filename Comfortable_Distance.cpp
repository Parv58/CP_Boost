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
    
        ll n,l,r;
        cin>>n>>l>>r;
        string s;
        cin>>s;
        vector<vector<ll>> pref(n + 1, vector<ll>(26, 0));
        ll ans=0;
        for(ll i=0; i<n; i++) {
            pref[i+1]=pref[i];
            pref[i+1][s[i]-'a']++;
        }
        for(ll i=0; i<n; i++){
            ll L=i+l;
            ll H=i+r;
            if(i+r>n-1){
                H=n-1;
            }
            if(H<L) continue;
            if(pref[H+1][s[i]-'a']-pref[L][s[i]-'a']>=0) ans+=(pref[H+1][s[i]-'a']-pref[L][s[i]-'a']);

        }
        cout<<ans<<endl;
    
    return 0;
}
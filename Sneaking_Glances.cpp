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
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
        v[i]*=2;
    }
    ll ans=0;
    for(ll i=0; i<(1LL<<n); i++){
        ll x=1;
        ll cnt=0;
        ll last;
        for(ll j=0; j<n; j++){
            last=x;
            if((1LL<<j) & i) x+=v[j];
            else x-=v[j];
           if ((last > 0 && x < 0) || (last < 0 && x > 0)) cnt++;
        }
        ans=max(ans,cnt);
    }
    cout<<ans<<endl;
    return 0;
}
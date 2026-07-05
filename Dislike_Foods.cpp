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
    ll n,m;
    cin>>n>>m;
    vector<vector<pair<ll,ll>>>v;
    for(ll i=0; i<m; i++){
        ll k;
        cin>>k;
        vector<pair<ll,ll>>p;
        for(ll j=0; j<k; j++){
            ll x;
            cin>>x;
            p.push_back({0,x});
        }
        v.push_back(p);
    }
    vector<ll>b(n);
    for(ll i=0; i<n; i++){
        cin>>b[i];
    }
    unordered_map<ll,ll>indx;
    for(ll i=0; i<n; i++){
        indx[b[i]]=i;
    }
    for(ll i=0; i<m; i++){
        for(ll j=0; j<v[i].size(); j++){
            v[i][j].first=indx[v[i][j].second];
        }
    }
    vector<ll>mp(n,0);
    for(ll i=0; i<m; i++){
        ll mx=LLONG_MIN;
        for(ll j=0; j<v[i].size(); j++){
            mx=max(mx, v[i][j].first);
        }
        mp[mx]++;
    }
    ll count=0;
    for(ll i=0; i<mp.size(); i++){
        count+=mp[i];
        cout<<count<<endl;
    }

}
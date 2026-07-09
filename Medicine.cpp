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
    ll n,k;
    cin>>n>>k;
    vector<pair<ll,ll>>v(n);
    for(ll i=0; i<n; i++){
        cin>>v[i].first;
        cin>>v[i].second;
    }
    sort(v.rbegin(), v.rend());
    vector<ll>prefx(n,0);
    prefx[0]=v[0].second;
    for(ll i=0; i<n-1; i++){
        prefx[i+1]=prefx[i]+v[i+1].second;
    }
    ll count=1;
    for(ll i=n-1; i>=0; i--){
        if(prefx[i]>k && i!=n-1) count+=abs(v[i].first-v[i+1].first);
        else if(prefx[i]>k && i==n-1) count+=abs(v[i].first);
        else break;
    }
    cout<<count<<endl;
    return 0;
}
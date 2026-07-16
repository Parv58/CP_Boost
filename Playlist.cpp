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
    int n;
    cin>>n;
    vector<int>v(n);
    vector<int>a;
    unordered_map<int,pair<int,int>>mp;
    mp.reserve(n);
    mp.max_load_factor(0.25);
    for(int i=n-1; i>=0; i--){
        cin>>v[i];
    }
    int count=0;
    int k=0;
    for(int i=0; i<n; i++){
        if(!mp[v[i]].second  || k>mp[v[i]].first){
            count++;
            mp[v[i]].second++;
            mp[v[i]].first=i;
        }
        else{
            a.push_back(count);
            count=i-mp[v[i]].first;
            k=mp[v[i]].first;
            mp[v[i]].first=i;
        }

    }
    a.push_back(count);
    int ans=INT_MIN;
    for(int i=0; i<a.size(); i++){
        ans=max(ans,a[i]);
    }
    cout<<ans<<endl;
    
    return 0;
}
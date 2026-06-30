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
    vector<pair<int,int>>v;
    for(int i=0; i<n; i++){
        int x;
        int y;
        cin>>x;
        cin>>y;
        while(!v.empty() && v.back().first<=x){
            v.pop_back();
        }
        v.push_back({x,y});
    }
    int q;
    cin>>q;
    vector<int>t(q);
    for(int i=0; i<q; i++){
        cin>>t[i];
    }
    for(int i=0; i<q; i++){
        int lo=0;
        int h1=v.size()-1;
        int ans=0;
        while(lo<=h1){
            int mid=lo+(h1-lo)/2;
            if(v[mid].second<t[i]+0.5){
                lo=mid+1;
            }
            else{
                ans=v[mid].first;
                h1=mid-1;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
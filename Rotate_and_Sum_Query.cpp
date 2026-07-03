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
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<ll>prefx(n);
    prefx[0]=v[0];
    for(int i=1; i<n; i++){
        prefx[i]=prefx[i-1]+v[i];
    }
    int count=0;
    for(int i=0; i<q; i++){
        int x;
        cin>>x;
        if(x==1){
            int c;
            cin>>c;
            count=(count+c)%n;
        }
        if(x==2){
            int l,r;
            cin>>l;
            cin>>r;
            l=l-1;
            r=r-1;
        l=(l+count)%n;
            r=(r+count)%n;
            ll ans;
            if(l <= r){
    ans = prefx[r] - (l ? prefx[l-1] : 0);
}
else{
    ans = (prefx[n-1] - (l ? prefx[l-1] : 0))+ prefx[r];
}
    cout<<ans<<endl;
        }
    }

    
    return 0;
}
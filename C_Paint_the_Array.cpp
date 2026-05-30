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

ll gcd(ll a, ll b){
    if((a%b)==0) return b;
    return gcd(b, a%b);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    // Declare any additional variables here
    
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }
        if(n==1) cout<<v[0]<<endl;
        else if(n==2){
            if(v[0]==v[1]) cout<<0<<endl;
            else cout<<max(v[0], v[1])<<endl;
        }
        else{
            ll g1=0;
            ll g2=0;
            for(int i=0; i<n; i++){
                if(i&1){
                    g2=gcd(g2, v[i]);
                }
                else{
                    g1=gcd(g1, v[i]);
                }
            }
            bool flag=true;
            for(int i=1; i<n; i+=2){
                if(v[i]%g1==0)flag=false;
            }
            if(flag) cout<<g1<<endl;
            else{
                flag=true;
                for(int i=0; i<n; i+=2){
                    if(v[i]%g2==0)flag=false;
                }
                if (flag) {
			        cout<<g2<<endl; 
		        }
                else {
			        cout<<0<<endl;
		    }
            }
            
        }
        
    }
    
    return 0;
}
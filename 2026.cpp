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
        set<ll>ans;
        vector<ll>squares;
        map<ll, ll>m;
        for(ll i=1; i*i<=n; i++){
            squares.push_back(i*i);
        }
        for(ll i=0; i<squares.size(); i++){
            for(ll j=i+1; j<squares.size(); j++){
                if(squares[i]+squares[j]<=n){
                    m[squares[i]+squares[j]]++;
                }
            }
        }

         for(ll i=0; i<squares.size(); i++){
            for(ll j=i+1; j<squares.size(); j++){
                if(squares[i]+squares[j]<=n && m[squares[i]+squares[j]]==1){
                    ans.insert(squares[i]+squares[j]);
                }
            }
        }

        cout<<ans.size()<<endl;
        for(auto it=ans.begin(); it!=ans.end(); it++){
            cout<<*it<<" ";
        }
        cout<<endl;
        
    
    
    return 0;
}
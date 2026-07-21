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
    
    // Declare any additional variables here
    
    int t; // number of test cases
    cin >> t;
    
    while (t--) {
        int n;
        cin>>n;
        vector<int>a(n);
        vector<int>b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        if(a==b) {
            cout<<0<<endl;
            continue;
        }
        if(accumulate(a.begin(), a.end(),0)==0 || accumulate(b.begin(), b.end(),0)==n){
            cout<<-1<<endl;
            continue;
        }
        int sum=0;
        for(int i=0; i<n; i++){
            if(a[i]!=b[i]) sum+=a[i];
        }
        if(sum%2!=0) cout<<1<<endl;
        else cout<<2<<endl;
    }
    return 0;
}
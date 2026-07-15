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
        vector<int>h(n);
        for (int i=0; i<n; i++) cin>>h[i];
        for (int s=0; s<n; s++) {
            vector<int>w1(n),w2(n),w(n);
            for (int i=1; i<n; i++) {
                w1[(s+i)%n]=max(w1[(s+i-1)%n], h[(s+i-1)%n]);
            }
            for(int i=1;i<n; i++){
                w2[(s+n-i)%n]=max(w2[(s+n-i+1)%n], h[(s+n-i)%n]);
            }
            for (int i=0;i<n;i++){
                w[i]=min(w1[i], w2[i]);
            }
            cout<<accumulate(w.begin(), w.end(), 0LL)<<" ";
        }
        cout<<endl;
       
    }
    
    return 0;
}
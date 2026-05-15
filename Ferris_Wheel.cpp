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
    int n,x;
    cin>>n>>x;
    vector<int>v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    sort(v.begin(), v.end());
    int i=0;
    int j=n-1;
    int count=0;
    while(i<=j){
        count++;
        if(v[i]+v[j]<=x){
            i++;
            j--;
        }
        else j--;
    }
    cout<<count<<endl;
    
    return 0;
}
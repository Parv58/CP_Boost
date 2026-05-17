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

void toh(int n, int source, int help, int dest){
    if(n==1){
        cout<<source<<" "<<dest<<endl;
        return;
    }
    if(n==0) return;
    toh(n-1, source, dest, help);
    cout<<source<<" "<<dest<<endl;
    toh(n-1, help, source, dest); // FIXED
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    cout<<((1<<n)-1)<<endl;
    toh(n,1,2,3);
    
    return 0;
}
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
    
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    vector<int>k;
    int count=0;
    for(int i=0; i<n; i++){
        if(k.size()==0){
            k.push_back(v[i]);
            count++;
        }
        else{
            int lo=0;
            int hi=k.size()-1;
            int ans=-1;
            while(lo<=hi){
                int mid=lo+(hi-lo)/2;
                if(k[mid]<=v[i]) lo=mid+1;
                else{
                    ans=mid;
                    hi=mid-1;
                }
            }
            if(ans==-1){
                k.push_back(v[i]);
                count++;
            }
            else{
                k[ans]=v[i];
            }
        }
    }
    cout<<count<<endl;


    
    return 0;
}
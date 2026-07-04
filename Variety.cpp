#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k,m;
    cin>>n>>k>>m;
    vector<pair<ll,int>>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++){
        cin>>v[i].second;
        cin>>v[i].first;
    }
    sort(v.rbegin(), v.rend());
    long long count=0;
    for(int i=0; i<n; i++){
        if(k==0){
            break;
        }
        else if(m==0){
            count+=v[i].first;
            k--;
        }
        else if(m==k){
            if(mp[v[i].second]) continue;
            else {
                count+=v[i].first;
                mp[v[i].second]++;
                k--;
                m--;
            }
        }
        else if(m<k){
            count+=v[i].first;
            k--;
            if(!mp[v[i].second]) m--;
            mp[v[i].second]++;
        }

    }
    cout<<count<<endl;
    
    return 0;
}
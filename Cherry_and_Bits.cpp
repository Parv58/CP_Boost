#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    vector<string>a(n);
    for (int i=0; i<n; i++) cin>>a[i];
    vector<vector<int>>pref(n+2,vector<int>(m+2,0));
    int q;
    cin>>q;
    while(q--){
        int x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        x1--;
        y1--;
        x2--;
        y2--;
        pref[x1][y1]++;
        pref[x2+1][y1]--;
        pref[x1][y2+1]--;
        pref[x2+1][y2+1]++;
    }
    for(int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if(i) pref[i][j]+=pref[i-1][j];
            if(j) pref[i][j]+= pref[i][j-1];
            if(i && j) pref[i][j]-=pref[i-1][j-1];
            if(pref[i][j] % 2) cout<<(a[i][j]=='0'?'1':'0');
            else cout<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}
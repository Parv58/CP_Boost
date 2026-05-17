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
    int n, m;
    cin>>n>>m;
    char arr[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i==0 && j==0){
                if(arr[i][j]!='A') arr[i][j]='A';
                else arr[i][j]='B';
            }
            else if(i==0 && j!=0){
                if(arr[i][j-1]!='A' && arr[i][j]!='A') arr[i][j]='A';
                else if(arr[i][j-1]=='A' && arr[i][j]!='A'){
                    if(arr[i][j]=='B') arr[i][j]='C';
                    else arr[i][j]='B';
                }
                else if(arr[i][j-1]!='A' && arr[i][j]=='A'){
                    if(arr[i][j-1]=='B') arr[i][j]='C';
                    else arr[i][j]='B';
                }
                else{
                    arr[i][j]='B';
                }
            }
            else if(i!=0 && j==0){
                if(arr[i-1][j]!='A' && arr[i][j]!='A') arr[i][j]='A';
                else if(arr[i-1][j]=='A' && arr[i][j]!='A'){
                    if(arr[i][j]=='B') arr[i][j]='C';
                    else arr[i][j]='B';
                }
                else if(arr[i-1][j]!='A' && arr[i][j]=='A'){
                    if(arr[i-1][j]=='B') arr[i][j]='C';
                    else arr[i][j]='B';
                }
                else{
                    arr[i][j]='B';
                }
            }
            else{
                set<char>s;
                s.insert(arr[i][j]);
                s.insert(arr[i-1][j]);
                s.insert(arr[i][j-1]);
                bool flag1=false;
                bool flag2=false;
                bool flag3=false;
                for(auto i=s.begin(); i!=s.end(); i++){
                    if(*i=='A')flag1=true;
                    if(*i=='B')flag2=true;
                    if(*i=='C')flag3=true;
                }
                if(!flag1) arr[i][j]='A';
                else if(!flag2) arr[i][j]='B';
                else if(!flag3) arr[i][j]='C';
                else arr[i][j]='D';
            }
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
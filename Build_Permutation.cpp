// link to question statement: https://codeforces.com/problemset/problem/1713/C


#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define vvi vector<vector<ll>>
#define vi vector<ll>
#define NUM 1000000007LL
#define umap unordered_map
 
 
 
ll n,i,j;
 
 
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--){
        cin>>n;
        ll a[n]={0};
        ll m=n;
        n--;
        while(n>=0){
            ll q=pow(ceil(sqrt(n)),2);
            i=q-n;
            for(;i<=n;i++){
                a[i]=q-i;
            }
            n=q-n-1;
            //cout<<"meow"<<n;
        }
        for(i=0;i<m;i++) cout<<a[i]<<' ';
        cout<<'\n';
        
    }
 
    return 0;
}

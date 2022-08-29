// link to question statement: https://codeforces.com/problemset/problem/1712/C

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
        vi a(n);
        for(i=0;i<n;i++) cin>>a[i];
        umap<ll,ll> u;
        ll count=0, ind=0,old;
        while(1){
            old=ind;
            ind=-1; 
            for(i=old;i<(n-1);i++){
                if(a[i]>a[i+1]) ind=i;
            }
            for(i=old;i<=ind;i++){
                u[a[i]]=1;
            }
            for(i=old;i<n;i++){
                if(u[a[i]]) a[i]=0;
            }
            if(ind==-1) break;
        }
        u[0]=-1;
        for(auto x:u){
            if(x.second==1) count++;
        }
        cout<<count<<'\n';
        
        
    }
 
    return 0;
}

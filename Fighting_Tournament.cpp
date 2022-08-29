// link to question statement: https://codeforces.com/problemset/problem/1719/C

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
{   ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
 
    int t=1;
    cin>>t;
    while(t--){
        ll q;
        cin>>n>>q;
        vi a(n);
        for(auto &x:a) cin>>x;
        ll mx=0;
        for(i=0;i<n;i++){
            if(a[i]==n) mx=i;
        }
        umap<ll,ll> u;
        ll ind=0;
        for(i=1;i<n;i++){
            if(a[i]<a[ind]) u[ind]++;
            else{
                ind=i;
                u[ind]++;
            }
            
        }
        for(j=0;j<q;j++){
            ll m,k;
            cin>>m>>k;
            if(m!=(mx+1)){
                    if(m!=1){
                        cout<<min(max((k-m+2),0LL),u[m-1])<<'\n';
                    }else{
                        cout<<min(max((k-m+1),0LL),u[m-1])<<'\n';
                    }
 
            }else{
                if(mx==0){
                    cout<<k<<'\n';
                }else{
                    cout<<max(k-m+2,0LL)<<'\n';
                }
                
            }
    
            
        }
        
    }
 
    return 0;
}

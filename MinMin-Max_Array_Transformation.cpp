// link to question statement: https://codeforces.com/problemset/problem/1721/C




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
    ll tt=1;
    cin>>tt;
    while(tt--){
        cin>>n;
        vi a(n),b(n);
        for(auto &x:a) cin>>x;
        for(auto &x:b) cin>>x;
        
        bool c[n]={0};
        c[0]=1;
        for(i=0;i<n-1;i++){
            if((b[i]-a[i+1])>=0) c[i+1]=1;
        }
        ll cr[n];
        ll temp=n-1;
        for(i=n-1;i>=0;i--){
            if(c[i]){
                cr[i]=temp;
            }else{
                cr[i]=temp;
                temp=i-1;
            }
        }
        
        ll r2[n];
        for(i=0;i<n;i++){
            r2[i]=b[cr[i]]-a[i];
        }
        
        ll r1[n];
        j=0;
        temp=b[j];
        for(i=0;i<n;i++){
            while((temp-a[i])<0){
                j++;
                temp=b[j];
            }
            r1[i]=temp-a[i];
        }
        
        
        
        
        // for(i=0;i<n;i++) cout<<c[i]<<' ';
        // cout<<'\n';
        // for(i=0;i<n;i++) cout<<cr[i]<<' ';
        // cout<<'\n';
        for(i=0;i<n;i++) cout<<r1[i]<<' ';
        cout<<'\n';
        for(i=0;i<n;i++) cout<<r2[i]<<' ';
        cout<<'\n';
        //cout<<'\n';
        
    }
 
    return 0;
}

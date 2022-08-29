
// link to question statement https://codeforces.com/problemset/problem/1721/D


#include <bits/stdc++.h>
using namespace std;
 
 
typedef unsigned long long ull;
typedef long long ll;
#define vvi vector<vector<ll>>
#define vi vector<ll>
#define umap unordered_map
#define pi pair<ll,ll>
#define ff first
#define ss second
 
#define yeah cout <<"YES"<<'\n'
#define nope cout <<"NO"<< '\n'
#define _print(a)  for(auto &x : a ) cout << x << " "
#define _inp(a)  for(auto &x : a) cin>>x
#define nl cout<<'\n';
#define _sort(v) sort(v.begin(), v.end());
#define r_sort(v) sort(v.begin(), v.end(), greater<int>());
 
 
ll const Mod = 1e18;
const ll N = 1000000000 + 7;
 
 
 
ll n,i,j;
 
 
int main()
{
    ios_base::sync_with_stdio(false);  
    cin.tie(NULL);
    ll tt=1;
    cin>>tt;
    while(tt--){
        cin>>n;
        vi a(n), b(n);
        _inp(a); _inp(b);
        
        ll ans=0;
        vi c(n),d(n);
        ll fix=0;
        for(j=30;j>=0;j--){
            
            // _print(a); nl;
            // _print(b); nl;
            // cout<<fix; nl;
            fix ^= (1LL<<j);
            
            
            for(i=0;i<n;i++) c[i]=((a[i])&(fix));
            for(i=0;i<n;i++) d[i]=((b[i])&(fix));
            _sort(c);
            r_sort(d);
            ll temp=(c[0])^(d[0]);
            for(i=1;i<n;i++){
                temp &= ((c[i])^(d[i]));
            }
            // _print(c); nl;
            // _print(d); nl;
            
            if(temp>ans){
                ans=temp;
            }else{
                fix ^=(1LL<<j);
            }
            //cout<<temp<<' '<<ans<<' '<<fix<<' '; nl;
            
        }
        cout<<ans; nl;
        
        
        
    }
 
    return 0;
}

// link to question statement: https://codeforces.com/problemset/problem/1714/E

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
        ll a[n];
        for(i=0;i<n;i++) cin>>a[i];
        bool f1=0,f2=0,f3=0, flag=0;
        ll meow;
        
        for(i=0;i<n;i++){
            ll r=a[i]%10;
            ll q=a[i]/10;
            
            switch(r){
                case 0:if(!f1){
                    f1=1; meow=q;
                }else{
                    if(q!=meow){
                        flag=1;
                    }
                }
                break;
                
                case 1:if(q&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
                case 2:if(q&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
                
                case 3:if((q+1)&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
                
                case 4:if(q&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
                case 5:if(!f1){
                    f1=1; meow=q+1;
                }else{
                    if((q+1)!=meow){
                        flag=1;
                    }
                }
                break;
                
                
                case 6:if((q+1)&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
                case 7:if((q+1)&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
                case 8:if(q&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
                
                case 9:if((q+1)&1){
                    f2=1;
                }else{
                    f3=1;
                }
                break;
            }
            
            if((f2&&f3)||(f2&&f1)||(f1&&f3)) flag=1;
            
            
            
            
           if(flag) break; 
            
        }
        
        if(flag) cout<<"NO"<<'\n';
        else cout<<"YES"<<'\n';
        
        
        
    }
 
    return 0;
}

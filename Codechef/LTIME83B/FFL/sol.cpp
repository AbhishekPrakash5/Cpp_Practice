#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main() {
    ll t;
    cin>>t;
    while(t--){
        ll n,s;
        cin>>n>>s;
        ll price[n],pType[n];
        for(ll i=0; i<n; i++) cin>>price[i];
        for(ll i=0; i<n; i++) cin>>pType[i];
        
        ll cost = 1e18;
        
        for(ll i=0; i<n; i++){
            if(pType[i] == 0){
                for(ll j=i+1; j<n; j++){
                    if(pType[j] == 1){
                        cost = min(cost, (price[i] + price[j]));
                    }
                }
            }
            if(pType[i] == 1){
                for(ll j=i+1; j<n; j++){
                    if(pType[j] == 0){
                        cost = min(cost, (price[i] + price[j]));
                    }
                }
            }
        }
        if((cost + s) <= 100){
            cout<<"yes\n";
        }
        else{
            cout<<"no\n";
        }
    }
    return 0;
}
#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    
    freopen("input.txt", "r", stdin);

    ll t;
    cin>>t;
    while(t--){
        unordered_map <int,int> totalCost;
        ll n,m;
        cin>>n>>m;
        ll f[n],p[n];
        for(ll i=0; i<n; i++) cin>>f[i];
        for(ll i=0; i<n; i++) cin>>p[i];
        for(ll i=0; i<n; i++){
            totalCost[f[i]] += p[i]; 
        }
        ll min = 1e17;
        for(auto i = totalCost.begin(); i != totalCost.end(); i++) {
            if(i->second < min)
                min = i->second;
        }
        cout<<min<<endl;
    }
    return 0;
}
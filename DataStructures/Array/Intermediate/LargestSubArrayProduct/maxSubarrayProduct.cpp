#include <bits/stdc++.h>
#define ll long long int
using namespace std;

ll maxSubarrayProduct(ll a[], ll n){
    ll maxGlobal = INT64_MIN, maxCurrent,minCurrent;
    maxCurrent = minCurrent = 1;

    for(ll i=0; i<n; i++){
        if(a[i] < 0)
            swap(maxCurrent,minCurrent);

        maxCurrent = max(a[i], maxCurrent*a[i]);
        minCurrent = min(a[i], minCurrent*a[i]);

        maxGlobal = max(maxGlobal, maxCurrent);
    }
    return maxGlobal;
}

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n; 
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i];

        cout<<maxSubarrayProduct(a,n)<<endl;
    }
    return 0;
}
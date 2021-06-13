#include <bits/stdc++.h>
#define ll long long int

using namespace std;

int main(){
    // fast io
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt", "r", stdin);
    
    ll t;
    cin>>t;
    while(t--){
        ll n,q,countEvenOnes = 0, countOddOnes = 0;
        cin>>n>>q;
        
        ll a[n];
        for(ll i=0; i<n; i++) cin>>a[i]; // array input
        
        while(q--){
            ll p,countOnes = 0,b[n] = {0};
            cin>>p;
            countEvenOnes = 0, countOddOnes = 0;
            for(ll i = 0; i < n; i++) b[i] = p ^ a[i]; // creating xor'ed array
            
            for(ll i = 0; i < n; i++){ // counting num of ones in each xor'ed array
               
                countOnes = __builtin_popcount(b[i]);

                if(countOnes & 1)
                    countOddOnes++;
                else
                    countEvenOnes++;
            }
            cout<<countEvenOnes<<" "<<countOddOnes<<endl;
        }
        
    }
    return 0;
}
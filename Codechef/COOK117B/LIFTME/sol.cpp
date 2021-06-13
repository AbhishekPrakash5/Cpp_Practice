#include <bits/stdc++.h>
#define iAmSpeed ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
using namespace std;

int main() {
    iAmSpeed
    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        ll lastout = 0, in = 0, out = 0, floors = 0;
        while(q--){
            cin>>in>>out;
            floors += abs(lastout - in);
            floors += abs(in - out);
            lastout = out;
        }
        cout<<floors<<"\n";
    }
}
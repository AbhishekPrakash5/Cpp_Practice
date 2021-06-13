#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin>>n;
    ll a[n];
    for(ll i = 0; i < n; i++) cin>>a[i];

    set< pair< ll, ll > > ans;

    for(ll i = 0; i < n; i++){
        ans.insert({a[i], i + 1});
    } 

    for(auto i : ans)
        cout<<i.second<<" ";
    

    return 0;
}
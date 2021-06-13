#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    ll n;
    cin>>n;
    if(n  % 2 == 0  && n != 2)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    
    return 0;
}
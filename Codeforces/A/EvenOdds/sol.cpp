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

    ll n, k, ans, count = 0;
    cin>>n>>k;
    
    if(k <= (n + 1) / 2){
        ans = (2 * k) - 1;
    }
    else{
        ans = (2 * (k - ((n + 1) / 2)));
    }
        cout<<ans;

    return 0;
}
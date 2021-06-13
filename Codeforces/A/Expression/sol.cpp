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

    const int n = 3;

    int a, b, c;
    cin>>a>>b>>c;
    
    int ans = a + b + c;

    ans = max(ans, a * (b + c));
    ans = max(ans, (a + b) * c);
    ans = max(ans, a * b * c);
    

    cout<<ans;

    return 0;
}
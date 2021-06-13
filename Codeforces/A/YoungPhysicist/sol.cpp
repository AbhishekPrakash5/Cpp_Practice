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

    int n;
    cin>>n;
    int a[3] = {0}, x, y, z;

    for(int i = 0; i < n; i++){
        cin>>x>>y>>z;
        a[0] += x;
        a[1] += y;
        a[2] += z;
    }

    if(a[0] == 0 && a[1] == 0 && a[2] == 0)
        cout<<"YES\n";
    else
        cout<<"NO\n";
    

    return 0;
}
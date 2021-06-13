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

    string a;
    cin>>a;
    sort(a.begin(), a.end());
    for(ll i=0; i<a.size()-1; i++) if(a[i] != '+') cout<<a[i]<<"+";
    cout<<a[(a.size()-1)];

    return 0;
}


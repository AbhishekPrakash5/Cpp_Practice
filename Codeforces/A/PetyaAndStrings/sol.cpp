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

    string a,b;
    cin>>a>>b;
    ll out = 0;
    for(ll i=0; i<a.size(); i++){
        a[i] = toupper(a[i]);
        b[i] = toupper(b[i]);
    }
    for(ll i=0; i<b.size(); i++){
        if(a[i] < b[i]){
            out = -1;
            break;
        }
        else if(a[i] > b[i]){
            out = 1;
            break;
        }   
    }
    cout<<out;

    return 0;
}
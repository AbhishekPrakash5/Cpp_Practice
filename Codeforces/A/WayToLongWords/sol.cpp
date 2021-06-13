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

    int t;
    cin>>t;
    //cout<<t;
    while(t--){
 
    string str;
    cin>>str;
    int size = str.size();
    if( size > 10 ) 
        cout<<str[0]<<size-2<<str[size-1]<<endl;
    else
        cout<<str<<endl;
    }

    return 0;
}
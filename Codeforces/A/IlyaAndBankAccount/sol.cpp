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

    ll n, a, b;
    cin>>n;

    if(n >= 0)
        cout<<n;
    else if(!(abs(n) / 100)){
        a = abs(n) % 10;
        n /= 10;
        b = abs(n) % 10;
        if(a == 0 || a < b){
            cout<<-a;
        }
        else
            cout<<-b;
    }
    else{
        a = abs(n) % 10;
        n /= 10;
        b = abs(n) % 10;
        n /= 10;
        if(a > b){
            cout<<-(abs(n) * 10 + b);
        }
        else{
            cout<<-(abs(n) * 10 + a);
        }
    }

    return 0;
}
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

    ll x1, y1, x2, y2, a;
    cin>>x1>>y1>>x2>>y2;

    if(x1 != x2 && y1 != y2 && abs(x1 - x2) != abs(y1 - y2)){
        cout<<"-1";
    }
    else{
        
        if(y1 == y2){
            a = abs(x1 - x2);
            cout<<x1<<" "<<y1+a<<" "<<x2<<" "<<y2+a;
        }
        else if(x1 == x2){
            a = abs(y1 - y2);
            cout<<x1+a<<" "<<y1<<" "<<x2+a<<" "<<y2;
        }
        else{
            cout<<x1<<" "<<y2<<" "<<x2<<" "<<y1;
        }
    }

    return 0;
}
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

    int n, p, q, x;
    cin>>n;
    set < int > s;
    cin>>p;
    for(int i = 0; i < p; i++){
        cin>>x;
        s.insert(x);
    }
    cin>>q;
    for(int i = 0; i < q; i++){
        cin>>x;
        s.insert(x);
    }

    if(s.size() == n){
        cout<<"I become the guy.\n";
    }
    else{
        cout<<"Oh, my keyboard!\n";
    }

    return 0;
}
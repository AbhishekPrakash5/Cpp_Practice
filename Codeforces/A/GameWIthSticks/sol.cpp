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

    vector < string > option = {"Akshat", "Malvika"};
    int n,m,least;
    cin>>n>>m;

    least = min(n, m);
    least = (least + 1) % 2;

    cout<<option[least]<<endl;

    return 0;
}
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

    int n, m;
    cin>>n>>m;
    int a[m];
    for(int i = 0; i < m; i++) cin>>a[i];

    sort(a, a + m);

    int diff = 1001;
    for(int i = 0; (i + n - 1) < m; i++){
        diff = min(diff, a[i + n - 1] - a[i]);
    }

    cout<<diff<<endl;

    return 0;
}
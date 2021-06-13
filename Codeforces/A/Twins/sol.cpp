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

    ll n; 
    cin>>n;
    int a[n], sum = 0;
    for(int i = 0; i < n; i++){
        cin>>a[i];
        sum += a[i];
    }
    int req = sum % 2 == 0 ? ((sum / 2) + 1) : ((sum + 1) / 2);
    //cout<<sum<<" "<<req<<endl;

    sort(a, a + n, greater < int >());

    //for(int i = 0; i < n; i++) cout<<a[i]<<" "; cout<<endl;

    int count = 0, gSum = 0;
    for(int i = 0; i < n; i++){
        gSum += a[i];
        count++;
        if(gSum >= req) break;
    }
    cout<<count<<endl;

    return 0;
}
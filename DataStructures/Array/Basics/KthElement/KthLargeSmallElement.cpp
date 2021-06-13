#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n,k;
    cin>>k>>n;
    int a[n];
    for(int i = 0; i < n; i++) cin>>a[i];

    sort(a,a+n);
    for(int i = 0; i < n; i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Kth Largest Element : "<<a[n-k]<<"\nKth Ssmallest Element : "<<a[k-1]<<endl;
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int findMin(int a[], int low, int high){
    if(high < low)
        return a[0];
    if(high == low)
        return a[low];
    
    int mid = low + (high - low) / 2;

    if(mid < high && a[mid + 1] < a[mid])
        return a[mid + 1];
    if(mid > low && a[mid] < a[mid - 1])
        return a[mid];

    if(a[high] > a[mid])
        return findMin(a, low, mid - 1);
    
    return findMin(a, mid + 1, high);
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        cout<<findMin(a,0,n-1)<<endl;
    }
    return 0;
}
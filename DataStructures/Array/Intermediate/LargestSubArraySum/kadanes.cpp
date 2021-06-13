#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(int a[], int n){ // Kadanes Algorithm Main Idea : max is current element or (current element+the previous subArray sum)
    int maxGlobal,maxCurrent = 0;
    maxGlobal = INT_MIN;

    for(int i=0; i<n; i++){
        maxCurrent = max(a[i], a[i]+maxCurrent);
        maxGlobal = max(maxCurrent, maxGlobal);
    }
    return maxGlobal;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        int res = maxSubarraySum(a,n);
        cout<<res<<endl;
    }
    return 0;
}
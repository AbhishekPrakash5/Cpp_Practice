#include <bits/stdc++.h>
using namespace std;

int  ans(int a[], int n){
    unordered_set <int> sumSet;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += a[i];
        if(sumSet.find(sum) != sumSet.end()){
            return 1;
        }
        if(sum == 0){
            return 1;
        }
        sumSet.insert(sum);
    }
    return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n; 
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        int res = ans(a,n);
        if(res)
            cout<<"Yes\n";
        else
            cout<<"No\n";        
    }
    return 0;
}
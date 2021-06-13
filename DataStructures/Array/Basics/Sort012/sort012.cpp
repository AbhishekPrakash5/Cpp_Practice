#include <bits/stdc++.h>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    int x,a[3] = {0};
    for(int i=0; i<n; i++){
        cin>>x;
        a[x]++;
    }
    for(int i=0; i<3; i++){
        if(a[i] > 0){
            for(int j=0; j<a[i]; j++)
                cout<<i<<" ";
        }
    }
    return 0;
}
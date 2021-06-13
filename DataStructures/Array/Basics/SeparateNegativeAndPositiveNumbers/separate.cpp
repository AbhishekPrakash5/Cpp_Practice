// Does not maintain order
#include <bits/stdc++.h>
using namespace std;

void rearrange1(int a[], int n){
    for(int i=0; i<n; i++){
        if(a[i] > 0){
            for(int j=i+1; j<n; j++){
                if(a[j] < 0){
                    swap(a[i], a[j]);
                }
            }
        }
    }
}

void rearrange2(int a[], int n){
    int j = 0; // keeps track of the first +ve num to swap the -ve nums with
    for(int i=0; i<n; i++){
        if(a[i] < 0){
            if(i != j){
                swap(a[i], a[j]);
            }
            j++;
        }
    }
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    rearrange1(a,n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
    rearrange2(a,n);
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}
#include <iostream>
using namespace std;

void rev(int a[], int size){
    for(int i=0,j=(size-1); i<size/2; i++,j--){
        int temp;
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
}

void print(int a[], int n){
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    rev(a,n);
    print(a,n);
    return 0;
}
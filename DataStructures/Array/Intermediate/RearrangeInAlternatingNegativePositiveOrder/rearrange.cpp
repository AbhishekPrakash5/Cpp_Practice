#include <bits/stdc++.h>
using namespace std;

// Util function
void rightRotate(int a[], int firstI, int lastI){
    int temp = a[lastI];
    for(int i=lastI; i>firstI; i--) a[i] = a[i-1];
    a[firstI] = temp;
}
// Util function
void print(int a[], int n){
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

void rearrange(int a[], int n){
    int outOfPosition = -1;
    
    for(int index = 0; index < n; index++){
        if(outOfPosition >= 0){
            if( (a[outOfPosition] >= 0 && a[index] < 0) || (a[outOfPosition] < 0 && a[index] >= 0) ){
                rightRotate(a,outOfPosition,index);

                if( index - outOfPosition >= 2){
                    outOfPosition += 2;
                }
                else 
                    outOfPosition = -1;
            }
        }
        if( outOfPosition == -1){
            if( (a[index] >= 0 && (!(index & 1))) || (a[index] < 0 && (index & 1)) )
                outOfPosition = index;
        }
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        cout<<"Current Array : ";
        print(a,n);
        rearrange(a,n);
        cout<<"After Rearranging : ";
        print(a,n);
    }
    return 0;
}
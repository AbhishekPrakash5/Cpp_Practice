#include <iostream>
using namespace std;

bool isThere(int toFind, int a[], int size){
    for(int i = 0; i < size; i++){
        if(a[i] == toFind)
            return true;
    }
    return false;
}

int main(){
    freopen("input.txt", "r", stdin);
    int n,find;
    cin>>n;
    int a[n];
    for(int i = 0; i< n; i++) cin>>a[i];
    cin>>find;
    if( isThere(find, a, n)){
        cout<<"Found\n";
    }
    else{
        cout<<"Not Found\n";
    }
    return 0;
}
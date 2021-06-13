#include <iostream>
using namespace std;

int main(){
    freopen("input.txt", "r", stdin);
    int n;
    cin>>n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin>>a[i];
    }
    cout<<"The Input array is : -\n";
    for(int i = 0; i < n; i++) cout<<a[i]<<" ";
    cout<<endl;
    return 0;
}
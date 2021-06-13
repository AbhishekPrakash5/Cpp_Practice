#include <iostream>
using namespace std;

int main(){
    freopen("input.txt" , "r", stdin);
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    int max = INT32_MIN, min = INT32_MAX;
    for(int i=0; i<n; i++){
        if(a[i] < min)
            min = a[i];
        if(a[i] > max)
            max = a[i];
    }
    cout<<"Range is : "<<max-min<<endl;
    return 0;
}
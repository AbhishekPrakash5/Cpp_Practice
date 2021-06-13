#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];

        int first,second,third;
        first = second = third = INT32_MIN;

        for(int i=0; i<n; i++){
            if(a[i] > first){
                third = second;
                second = first;
                first = a[i];
            }
            else if(a[i] > second){
                third = second;
                second = a[i];
            }
            else if(a[i] > third){
                third = a[i];
            }
        }
        cout<<"First : "<<first<<"\nSecond : "<<second<<"\nThird : "<<third<<endl;
    }
    return 0;
}
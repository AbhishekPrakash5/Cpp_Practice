#include <bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count = 1,countGlobal = 0; 
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        sort(a,a+n);
        for(int i=0; i<n; i++){
            if(a[i+1] - a[i] == 1){
                count++;
            }
            else if(a[i+1] - a[i] == 0){
                continue;
            }
            else{
                countGlobal = max(count,countGlobal);
                count = 1;
            }
        }  
            cout<<countGlobal<<endl;
    }
     return 0;   
} 

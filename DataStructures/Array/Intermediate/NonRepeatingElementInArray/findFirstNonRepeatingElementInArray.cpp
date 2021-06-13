#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,flag = 1;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++) cin>>a[i];
        unordered_map < int,int > occerenceTable;

        for(int i=0; i<n; i++) occerenceTable[a[i]]++;
    
        for(int i=0; i<n; i++){
            if( occerenceTable[a[i]] == 1 ){
                cout<<a[i]<<endl;
                flag = 0;
                break;
            }
        }
        if(flag)
            cout<<"-1\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n1,n2,n3,flag = 1;
        cin>>n1>>n2>>n3;
        int a[n1],b[n2],c[n3];
        for(int i=0; i<n1; i++) cin>>a[i];
        for(int i=0; i<n2; i++) cin>>b[i];
        for(int i=0; i<n3; i++) cin>>c[i];

        map < int,int > isPresent;

        for(int i=0; i<n1; i++){
            isPresent[a[i]] = 1;
        }

        for(int i=0; i<n2; i++){
            if( isPresent.find(b[i]) != isPresent.end() ){
                isPresent[b[i]] = 2;
            }

        }


        for(int i=0; i<n3; i++){
            if( isPresent.find(c[i]) != isPresent.end() && isPresent[c[i]] == 2){
                isPresent[c[i]] = 3;
                auto x = isPresent.find(c[i]);
                cout<<x->first<<" ";
                flag = 0;
            }
        }
        if(flag)
            cout<<"-1";
        
        cout<<endl;
 
    }
    return 0;
}
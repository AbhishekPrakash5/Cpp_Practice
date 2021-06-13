#include <bits/stdc++.h>
using namespace std;

// Using Count Sort 
void printDuplicates(int a[], int n) {
    int count[n] = {0},flag = 1;
    for(int i=0; i<n; i++){
        count[a[i]]++;
    }
    for(int i=0; i<n; i++){
        if(count[i] > 1){
            cout<<i<<" ";
            flag = 0;
        }
    }
    if(flag){
        cout<<"-1";
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
        //printDuplicates(a,n);
        
///
        bool flag = true;
        unordered_set < int > numberSet;
        set < int > outputSet;
        for(int i=0; i<n; i++){
            if( numberSet.find(a[i]) != numberSet.end() ){
                outputSet.insert(a[i]);
                flag = false;
            }
            else{
                numberSet.insert(a[i]);
            }
            
        }
        if(flag)
            cout<<"-1";
        else{ 
            for(auto i = outputSet.begin(); i != outputSet.end(); i++){
                cout<<*i<<" ";
            }
        }
///

        cout<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define NO_OF_CHARS 256

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        bool flag = true,flag2 = true;
        cin>>a>>b;
        cout<<a<<" "<<b<<" ";
        int count[NO_OF_CHARS] = {0};
        if(a.size() != b.size()){
            cout<<"Not Anagrams\n";
            flag = false;
            flag2 = false;
        }
        else{
            for(int i=0; i<a.size(); i++){
                count[a[i]]++;
                count[b[i]]--;
            }
        }
        if(flag){
            for(int i=0; i<NO_OF_CHARS; i++)
                if(count[i] != 0){
                    cout<<"Not Anagrams\n";
                    flag2 = false;
                    break;
                }
        }
        if(flag2)
            cout<<"Anagrams\n";
    }
    return 0;
}
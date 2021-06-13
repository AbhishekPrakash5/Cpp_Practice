#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s1,s2,check;
        cin>>s1>>s2;
        check = s1 + s1;
        //cout<<s1.size()<<" "<<s2.size()<<" "<<check<<" ";
        if(s1.size() == s2.size()){
            if(check.find(s2) != string::npos){
                cout<<"Rotation\n";
            }
            else{
                cout<<"Not a Rotation\n";
            }
        }
        else{
            cout<<"Not a Rotation\n";
            
        }
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        bool flag = true;
        getline(cin,s);
        unordered_set < char > characters;
        for(int i=0; i<s.size(); i++){
            if(characters.find(s[i]) != characters.end()){
                cout<<s[i]<<" ";
                flag = false;
            }
            else
                characters.insert(s[i]);
            
        }
        if(flag)
            cout<<"Not Duplicates\n";
        else
            cout<<endl;
        
    }
    return 0;
}
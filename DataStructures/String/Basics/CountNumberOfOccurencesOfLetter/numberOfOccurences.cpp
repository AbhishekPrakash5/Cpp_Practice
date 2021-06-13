#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string str;
        map < char,int > occurences;
        
        getline(cin,str);
        cout<<str<<endl;
        for(int i=0; i<str.size(); i++){
            if(str[i] != ' ')
                occurences[str[i]]++;
        }
        for( auto i : occurences ){
            cout<<i.first<<" = "<<i.second<<endl;
        }
    }
    return 0;
}
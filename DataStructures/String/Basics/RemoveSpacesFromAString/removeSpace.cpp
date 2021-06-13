#include <bits/stdc++.h>
using namespace std;

// not sure y it isnt working with string might work using char * 
string myRemove(string a){ // without using inbuilt functions
    int count = 0;
    for(int i=0; a[i]; i++){
        if(a[i] != ' '){
            a[count++] = a[i];
        }
    }
    a[count] = '\0';
    return a;
}

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        getline(cin,s);
        s.erase(remove(s.begin(),s.end(),' '),s.end());
        cout<<s<<endl;
        //cout<<myRemove(s)<<endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int integer1,integer2;
    string str1,str2;
    cin>>integer1>>str1;
    str2 = to_string(integer1);
    integer2 = stoi(str1);
    cout<<"Type Integer : "<<integer1<<" to Type String : "<<str2<<endl;
    cout<<"Type String : "<<str1<<" to Type Integer : "<<integer2<<endl;
    return 0;
}
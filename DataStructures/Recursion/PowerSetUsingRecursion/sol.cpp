#include<bits/stdc++.h>
using namespace std;

string printSubStr(string s, string curr = " ", int index = 0){
    if(index == s.length()){
        //cout<<curr<<" ";
        return curr; 
    }
    string res;
    res += printSubStr(s, curr, index + 1);
    res += printSubStr(s, curr + s[index], index + 1);
    return res;
}

int main(){
    string s = "abc";
    string res = printSubStr(s);
    cout<<endl;

    stringstream ss(res);
    istream_iterator <string> begin(ss);
    istream_iterator <string> end; 
    vector <string> a(begin, end);
    copy(a.begin(), a.end(), ostream_iterator <string> )
    for(auto i : a){
        cout<<i<<" ";
    }
    return 0;
}
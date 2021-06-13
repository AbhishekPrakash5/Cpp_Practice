#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        cout<<s<<endl;
        int n = s.size();
        for(int i=0,j=n-1; i<n/2; i++,j--){
            char temp = s[i];
            s[i] = s[j];
            s[j] = temp;
        }
        cout<<s<<endl;
    }
    return 0;
}
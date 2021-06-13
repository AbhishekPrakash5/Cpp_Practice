#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        int n;
        string s;
        cin>>n>>s;
        bool flag = true;
        for(int i=0,j=n-1; i<n/2; i++,j--){
            if(s[i] != s[j])
                flag = false;
                break;
        }
        if(flag)
            cout<<"Palindrome\n";
        else
            cout<<"Not a Palindrome\n";
            
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int goodness = 0;
        for(int i=0, j=s.length()-1; i<s.length()/2; i++,j--){
            if(s[i] != s[j]){
                goodness++;
            }
        }
        cout<<goodness<<endl;
        cout<<k - goodness<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

// We could use unordered_map (hashing) to keep the o/p in provided order, create map then iterate through string and save the char which have count = 1

int main(){
    int t;
    cin>>t;
    while(t--){
        string s, output;
        cin>>s;
        int n = s.size(), count = 0;
        set < char > characters(s.begin(),s.end()-1);
        for( auto i : characters){
            output += i;
        }
        output += '\0';
        cout<<output<<endl;
    }
    return 0;
}
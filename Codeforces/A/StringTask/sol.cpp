#include <bits/stdc++.h>
 
using namespace std;
 
int main() {

#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    string n;
    cin>>n;
    for(int i=0; i<n.size(); i++){
        if( !(n[i] == 'a' || n[i] == 'A' || n[i] == 'e' || n[i] == 'E' ||
            n[i] == 'i' || n[i] == 'I' || n[i] == 'o' || n[i] == 'O' ||
            n[i] == 'u' || n[i] == 'U' || n[i] == 'y' || n[i] == 'Y') ){
                
                cout<<"."<<tolower(n[i],std::locale());
            }
    }

    return 0;
}



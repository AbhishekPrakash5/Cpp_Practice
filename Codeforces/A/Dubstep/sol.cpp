#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {

ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    string txt;
    cin>>txt;
    int flag = 0;
    
    for(int i = 0; i < txt.size(); i++){
        if(txt[i] == 'W' && txt[i + 1] == 'U' && txt[i + 2] == 'B'){
            i += 2;
            if(flag)
                cout<<" ";
        }
        else{
            flag = 1;
            cout<<txt[i];
        }
    }

    return 0;
}
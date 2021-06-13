#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>k>>n;
    unordered_map < int,int > occurence;
    int x;
    for(int i = 0; i < n; i++){
        cin>>x;
        occurence[x]++;
    }
    /*
    for(auto i = occurence.begin(); i != occurence.end(); i++){
        cout<<i->first<<" "<<i->second<<endl;
    }
    */
   cout<<k<<" has occurred "<<occurence[k]<<" times\n";
   return 0;
}
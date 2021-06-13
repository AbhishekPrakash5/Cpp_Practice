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

    
    int n, count = 0;
    cin>>n;
    vector < pair < int, int > > teams(n);
    for(int i = 0; i < n; i++){
        cin>>teams[i].first>>teams[i].second;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                if(teams[i].second == teams[j].first){
                    count++;
                }
            }
        }
    }

    cout<<count<<endl;

    return 0;
}
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int lucky(int n){
    
    while(n > 0){
        if( n%10 != 4 && n%10 != 7)
            return 0;
        n/=10;
    }
    return 1;
}

int main() {

ios_base::sync_with_stdio(false); cin.tie(NULL);

#ifndef ONLINE_JUDGE
    //for getting input from input.txt
    freopen("input.txt", "r", stdin);
    //for writing output to output.txt
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin>>n;
  
    if(lucky(n)){
        cout<<"YES";
        return 0;
    }
    for(int i=1; i<=n/2; i++){ // checking if the number is divisible by any lucky number eg 4, 7, 47, 74, etc.
        if(lucky(i)){
            if(n%i == 0){
                cout<<"YES";
                return 0;
            }
                
        }
        
    }
    cout<<"NO";

    return 0;
}
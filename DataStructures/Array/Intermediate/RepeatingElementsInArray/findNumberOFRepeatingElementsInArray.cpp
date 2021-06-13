#include <bits/stdc++.h>
using namespace std;

void check(int a[], int n){ // If we start checking the array from last, then in the end we will have the first repeating element
    int ans = -1;
    set <int> s;
    for(int i=n-1; i>=0; i--){
        if(s.find(a[i]) != s.end()){
            ans = i;
        }
        else
            s.insert(a[i]);
        
    }
   
    if(ans == -1){
        cout<<ans<<endl;
    }
    else
        cout<<ans+1<<endl;
}

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0; i<n; i++) cin>>a[i];
	
	    check(a,n);
	  
	}
	return 0;
}
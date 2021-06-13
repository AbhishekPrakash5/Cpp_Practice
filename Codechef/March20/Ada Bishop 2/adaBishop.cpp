#include <bits/stdc++.h>
#define iAmSpeed ios_base::sync_with_stdio(false); cin.tie(NULL);

using namespace std;

void printAns(){ // count is 25
    cout<<"2 2"<<"\n";
    cout<<"3 1"<<"\n";
    cout<<"1 3"<<"\n";
    cout<<"2 2"<<"\n";
  	cout<<"3 3"<<"\n";
    cout<<"5 1"<<"\n";
    cout<<"1 5"<<"\n";
    cout<<"3 3"<<"\n";
    cout<<"4 4"<<"\n";
  	cout<<"7 1"<<"\n";
   	cout<<"1 7"<<"\n";
   	cout<<"4 4"<<"\n";
   	cout<<"5 5"<<"\n";
   	cout<<"8 2"<<"\n";
   	cout<<"2 8"<<"\n";
    cout<<"5 5"<<"\n";
	cout<<"6 6"<<"\n";
	cout<<"8 4"<<"\n";
	cout<<"4 8"<<"\n";
    cout<<"6 6"<<"\n";
	cout<<"7 7"<<"\n";
   	cout<<"8 6"<<"\n";
   	cout<<"6 8"<<"\n";
   	cout<<"7 7"<<"\n";
    cout<<"8 8"<<"\n";
}

int main() {
    iAmSpeed

    freopen("input.txt", "r", stdin);

    int t,r,c;
    cin>>t;
    
    while(t--){
        cin>>r>>c;
        
        int x = (r + c) / 2;
        
        if(r == c && r != 1){
            cout<<"26"<<"\n";
            cout<<"1 1"<<"\n";
            printAns();
        }
        
        else if(r != 1 || c != 1){
            cout<<"27"<<"\n";
            cout<<x<<" "<<x<<"\n";
            cout<<"1 1"<<"\n";
            printAns();
        }
        else if(r == 1 && c == 1){ // subtask #1
        	cout<<"25"<<"\n";
        	printAns();
        }
    }
	return 0;
}

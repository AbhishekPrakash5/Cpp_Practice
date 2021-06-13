#include <bits/stdc++.h> 
using namespace std;

int getUnionSize(vector < int > a, vector < int > b){
    unordered_set <int> unionSet;
    for(auto i = a.begin(); i != a.end(); i++) unionSet.insert(*i);
    for(auto i = b.begin(); i != b.end(); i++) unionSet.insert(*i);
    return unionSet.size();
    
}

int getIntersectionSize(vector < int > a, vector < int > b){
    unordered_set <int> intersectionSet;
    int count = 0;
    for(auto i = a.begin(); i != a.end(); i++) intersectionSet.insert(*i);
    for(auto i = b.begin(); i != b.end(); i++){
        if( !(intersectionSet.find(*i) == intersectionSet.end())) 
            count++;
    } 
    return count;
}

int main(){
    int t,n1,n2,x;
    vector < int > a,b;
    cin>>t>>n1>>n2;
    while(t--){
        a.clear();
        b.clear();
        for(int i=0; i<n1; i++){
            cin>>x;
            a.push_back(x);
        }
        for(int i=0; i<n2; i++){
            cin>>x;
            b.push_back(x);
        }
        cout<<"Union : "<<getUnionSize(a,b)<<endl;
        cout<<"Intersection : "<<getIntersectionSize(a,b)<<endl;
    }
    return 0;
}
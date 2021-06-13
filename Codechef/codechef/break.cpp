#include <bits/stdc++.h>
using namespace std;

int breakthedoor(int n, int d, int k, int p[])
{
    int count=0;
    while(d>0 && k>0)
    {
        sort(p,p+n);
        if(d<p[n-1])
            d=0;
        else
            d=d-p[n-1];
            
        p[n-1]=floor(p[n-1]/2);
        k--;
        /*for(int i=0; i<n; i++) cout<<p[i]<<" ";
        cout<<endl;
        cout<<d<<endl;*/
        count++;
        if(d==0)
            return count;
    }
    return -1;
}

using namespace std;

int main() 
{
    int n,d,k;
    cin>>n>>d>>k;
    int p[n];
    for(int i=0; i<n; i++) cin>>p[i];
    
    //for(int i=0; i<n; i++) cout<<p[i]<<" ";
    //cout<<endl;
    
    int flag=breakthedoor(n,d,k,p);
    
    if(flag)
        cout<<flag<<endl;
    else
        cout<<flag<<endl;
            
    
    return 0;
}
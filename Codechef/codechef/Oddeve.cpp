#include <iostream>
#include <math.h>

bool isPowerOfTwo(int n) 
{ 
   if(n==0) 
   return false; 
  
   return (ceil(log2(n)) == floor(log2(n))); 
} 

using namespace std;

int main() 
{
    int t,n;
    cin>>t;
    while(t--)
    {
        int flag=0;
        cin>>n;
        if(n%2==0)
            flag = isPowerOfTwo(n);
        else
            flag = isPowerOfTwo((3*n) + 1);
            
        if(flag)
            cout<<"YES\n";
        else
            cout<<"NO\n";
            
    }
    return 0;
}
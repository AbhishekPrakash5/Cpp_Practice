#include <iostream>

using namespace std;

int main()
{
    int t,s,a[6],n,flag;
    cin>>t;
    //if(t>=1 && t<=100)
    //{
        while(t--)
        {
            flag=1;
            for(int i=0; i<6; i++)
                a[i]=-1;
            cin>>s;
            //if(s>=1 && s<= 100000)
            //{
                n=0;
                while(s>0)
                {
                    a[n] = s%10;
                    s = s/10;
                    n++;
                }
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[j]==1)
                        {
                            a[j]=-1;
                            if(j<n)
                                if(a[j+1]==0 && a[j+1]!=-1)
                                    a[j+1]=1;
                                else if(a[j+1]==1 && a[j+1]!=-1)
                                    a[j+1]=0;
                            if(j>0)
                              if(a[j-1]==0 && a[j-1]!=-1)
                                    a[j-1]=1;
                                else if(a[j-1]==1 && a[j-1]!=-1)
                                    a[j-1]=0;  
                        }
                    }
                }
                for(int i=0; i<n; i++)
                {
                    if(a[i]!=-1)
                    { 
                        flag=0;
                        break;
                    }
                    
                }
                if(flag)
                    cout<<"WIN\n";
                else
                    cout<<"LOSE\n";
            //}
        }
    //}
    return 0;
}
____________________________________________



#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int t,n,flag;
    char a[6];
    cin>>t;
    if(t>=1 && t<=100)
    {
        while(t--)
        {
            flag=1;
            for(int i=0; i<6; i++)
                a[i]='2';
            cin>>a;
            n=strlen(a);
            //if(a[0]>='1' && s<= '100000')
            //{
                
                /*while(s>0)
                {
                    a[n] = s%10;
                    s = s/10;
                    n++;
                }*/
                for(int i=0; i<n; i++)
                {
                    for(int j=0; j<n; j++)
                    {
                        if(a[j]=='1')
                        {
                            a[j]='2';
                            if(j<n)
                                if(a[j+1]=='0' && a[j+1]!='2')
                                    a[j+1]='1';
                                else if(a[j+1]=='1' && a[j+1]!='2')
                                    a[j+1]='0';
                            if(j>0)
                              if(a[j-1]=='0' && a[j-1]!='2')
                                    a[j-1]='1';
                                else if(a[j-1]=='1' && a[j-1]!='2')
                                    a[j-1]='0';  
                        }
                    }
                }
                for(int i=0; i<n; i++)
                {
                    if(a[i]!='2')
                    { 
                        flag=0;
                        break;
                    }
                    
                }
                if(flag)
                    cout<<"WIN\n";
                else
                    cout<<"LOSE\n";
            //}
        }
    }
    return 0;
}

//warrior

#include <iostream>
#include <algorithm>

using namespace std;

int killenemy(int x, int y[], int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(x>y[i]) 
        {
            count++;
            x=2*(x-y[i]);
        }
    }
    return count;
}

int main() {
    int t,n,q;
    cin>>t;
    while(t--)
    {
        cin>>n>>q;
        int y[n],x[q];
        
        for(int i=0; i<n; i++) cin>>y[i];
        for(int i=0; i<q; i++) cin>>x[i];
        
        sort(y,y+n);
        /*for(int i=0; i<n; i++) cout<<y[i]<<" ";
        cout<<endl;*/
        
        for(int i=0; i<q; i++)
        {
            cout<<killenemy(x[i],y,n)<<endl;
        }
        
    }
    return 0;
}

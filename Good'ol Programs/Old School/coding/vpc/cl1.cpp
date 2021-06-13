#include<iostream>
#include<conio.h>
using namespace std;
class prime
{
int a,k,i;
public:
prime(int x)
{
a=x;
}
void calculate()
{
k=1;
{
for(i=2;i<=a/2;i++)
if(a%i==0)
{
k=0;
break;
}
else
{
k=1;
}
}
}

void show()
{
if(k==1)
cout<<"\n"<<a<<" is prime";
else
cout<<"\n"<<a<<" is not prime";
}
};
int main()
{
 int a;
 char ans;
 do{
  cout<<"enter the number\n";
 cin>>a;
 prime obj(a);//object creation for class
 obj.calculate();
 obj.show();
 getch();
 cout<<"\ncontinue? (y/Y):";
 cin>>ans;
 }while(ans=='y'||ans=='Y');
 return 0;
}

#include<iostream>
using namespace std;
void greaternum()
{
	int a=0,b=0,c=0,big=0,small=0;
	cout<<"Enter 3 no.s \n";
	cin>>a>>b>>c;
		if(a>b)
		{
			big=a;
			small=b;
		}
		else
		{
			big=b;
			small=a;
		}
		if(big>c)
		{
			if(c>small)
			{
				cout<<big<<">"<<c<<">"<<small;
			}
			else
				cout<<big<<">"<<small<<">"<<c;
		}
		else
		{
			cout<<c<<">"<<big<<">"<<small;
		}
}
int main()
{
	greaternum();
	return 0;
}

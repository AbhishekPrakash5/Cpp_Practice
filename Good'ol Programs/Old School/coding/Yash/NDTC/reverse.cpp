#include<iostream>
using namespace std;
void revnum(int n)
{
	int rem=0, rev=0, a=0;
		a=n;
		while(n>0)
		{	
			rem= n%10;
			rev=(rev*10)+rem;
			n=n/10;
		}
		cout<<a<<" is "<<rev;
		if(a==rev)
			cout<<" yes ";
		else
			cout<<" no ";
}
int main()
{
	int num;
	cout<<"enter a no. of which u want reverse ";
	cin>>num;
	revnum(num);
	return 0;
}

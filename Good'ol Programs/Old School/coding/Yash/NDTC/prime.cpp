#include<iostream>
using namespace std;

void chkprime(int n)
{
	int flag = 1;
		for(int i = 2; i <= n/2; i++)
		{
			if ( n % i == 0 )
			{
				flag = 0 ;
				break ;
			}
		}
	if(flag)
		cout<<"prime";
	else
		cout<<"not prime";
	
}
int main()
{
	int a;
	cout<<"enter a no";
	cin>>a;
	chkprime(a);
	return 0;
}

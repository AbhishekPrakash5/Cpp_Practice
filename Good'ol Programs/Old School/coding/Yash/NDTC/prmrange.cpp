#include<iostream>
using namespace std;
int prime(int n)
{
	int flag = 1;
	for ( int i = 2 ; i < n/2 ; i++ )
	{
		if ( n % i == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
int main()
{
	int n1 , n2 , prm ;
	cout<< "enter range (first no.) ";
	cin>> n1;
	cout<< " to ";
	cin>> n2;
	for(int i = n1; i <= n2; i++ )
	{
		prm = prime(i);
		if (prm)
			cout<<i<<",";
	}
	return 0;
}

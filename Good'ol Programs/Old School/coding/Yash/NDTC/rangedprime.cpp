#include<iostream.h>
#include<conio.h>
int prime(int n);
{
	int flag = 1;
	for ( int i = 2 ; i < n/2 ; i++ )
	{
		if ( n % 2 == 0)
		{
			flag = 0;
			break;
		}
	}
	return flag;
}
void main()
{
	int n1 , n2 , prm ;
	cout<< "sd";
	cin>> n1;
	cout<< "sdsd";
	cin>> n2;
	for(int i = n1; i <= n2; i++ )
	{
		prm = prime(i);
		if (prm)
			cout<<i<<",";
	}
}
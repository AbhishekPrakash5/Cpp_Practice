#include<iostream>
using namespace std;
int fact( int n )
{
	int fact=1;
	for(int i=n; i>=1; i--)
		fact *= i;
	return fact;
}
int main()
{
	int num;
	cout<<"enter a no. of which u want factorial ";
	cin>>num;
	cout<<fact(num);
	return 0;
}

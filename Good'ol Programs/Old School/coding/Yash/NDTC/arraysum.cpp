#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;

int a[3][3];
int b[3][3];
int c[3][3];

void input(int x[][3])
{
	for(int i = 0 ; i < 3 ; i++ )
	{
		for(int j = 0 ; j <3 ; j++ )
		{
			cin>>x[i][j];
		}
		
	}
}
void display(int x[][3])
{
	for(int i = 0 ; i < 3 ; i++ )
	{
		for(int j = 0 ; j <3 ; j++ )
		{
			cout<<x[i][j]<<" ";
		}
		cout<<endl;
	}
}
void add(int x[][3], int y[][3], int z[][3])
{
	for(int i = 0 ; i < 3 ; i++)
	{
		for(int j = 0 ; j <3 ; j++ )
		{
			z[i][j] = x[i][j] + y[i][j];
		}
		
	}
}
int main()
{
	cout<<"Enter 9 nos\n";
	input(a);
	cout<<"\nEnter another set of 9 nos\n";
	input(b);
	display(a);
	cout<<endl;
	display(b);
	cout<<endl;
	add(a,b,c);
	cout<<"sum is \n";
	display(c);
	return 0;
}

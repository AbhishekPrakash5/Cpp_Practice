#include<iostream.h>
#include<conio.h>
int ar[5];
void meow()
{
	
	cout<<"enter";
	for(int i=0;i<3;i++)
	{
		cin>>ar[i];
	}
}
void main()
{
	meow();
	int a;
	int b=-1;
	cout<<"enter a no. to search";
	cin>>a;
	for(int j=0;j<3;j++)
	{
		if(a==ar[j])
		{
			b=j;
		}
	}
	if(b==-1)
	{
		cout<<"no";
	}
	else
	{
		cout<<"yes"<<b;
	}
	getch();
}
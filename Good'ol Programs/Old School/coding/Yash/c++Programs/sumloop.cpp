#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void function(int x)
	{	int sum=0;
		int product=1;
		float division=1;
		for(int i=1;i<=x;i++)        
		{
			cout<<i<<",";
			sum=sum+i;
			product=product*i;
			division=division/i;
			cout<<sum<<endl;
			cout<<product<<endl;
			cout<<division<<endl;
		}

	}
void main()
	{
		int a;
		cout<<"Enter a no.:";
		cin>>a;
		function(a);
		getch();
	}
	
	
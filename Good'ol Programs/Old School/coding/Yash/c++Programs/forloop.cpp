#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void function(int x,int y,int z)
	{
		for(int i=x;i<=y;i++)        
		{
			cout<<i*z<<endl;
			
		}

	}
void main()
	{
		int a;
		int b;
		int c;
		cout<<"Enter a no. of which you want the table:";
		cin>>c;
		cout<<"Enter a no. till which you need the table:";
		cin>>b;
		cout<<"Enter a no. from which you want to start the table:";
		cin>>a;
		function(a,b,c);
		getch();
	}
	
	
	
	
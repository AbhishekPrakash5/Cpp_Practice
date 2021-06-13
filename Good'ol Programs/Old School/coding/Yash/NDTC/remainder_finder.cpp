#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void cal(int l,int m)
	{
		int q=(m/l);
		int y=(q*l);
		int r=(m-y);
		
		cout<<"Qutient:"<<q;
		cout<<"remainder:"<<r;
	}
void main()
	{
		cout<<"Enter divisor:";
		cin>>int l;
		cout<<"Enter dividend:";
		cin>>int m;
		cal(l,m);
		getch();
	}
#include<iostream.h>
#include<conio.h>
#include<stdio.h>

void cal(long l,long m)
	{	
		long q,y,r;
		
		q=(m/l);
		y=(q*l);
		r=(m-y);
		
		cout<<"Qutient:"<<q<<endl;
		cout<<"remainder:"<<r;
	}
void main()
	{	char a;
		do{
		clrscr();
		long l,m;
		cout<<"Enter divisor:";
		cin>>l;
		cout<<"Enter dividend:";
		cin>>m;
		cal(l,m);
		cout<<"\nDo you want to continue(y for yes ; n for no)";
		cin>>a;
		}while(a=='y');
		getch();
	};
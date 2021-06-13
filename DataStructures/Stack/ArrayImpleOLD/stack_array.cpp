#include<bits/stdc++.h>
using namespace std;

#define size 5
int a[size],top=-1;

void push()
{
	int val;
	if(top==size)
		cout<<"Stack overflow cannot push element\n";
	
	else
	{
		cout<<"Enter Element : ";
		cin>>val;
		a[++top]=val;
		cout<<"Element Entered\n";
	}
}
void pop()
{
	if(top==-1)
	{
		cout<<"Stack underflow no element to pop\n";
	}
	else
	{
		top--;
		cout<<"Element Deleted\n";
	}
}
void display()
{
	if(top==-1)
	{
		cout<<"Stack underflow no element to display\n";
	}
	else
	{
		for(int i=top; i>=0; i--)
			cout<<a[i]<<" ";
		cout<<endl;
	}
}
void view_top()
{
	if(top==-1)
		cout<<"TOP element is : NULL";
	else
		cout<<"TOP element is : "<<a[top];
	cout<<" and TOP index is : "<<top<<" and TOP position is : "<<top+1<<endl;
}
int main()
{
	int choice=0;
	DO:
	cout<<"Enter Stack operation:\n1.PUSH\n2.POP\n3.DISPLAY\n4.TOP ELEMENT\n5.EXIT\n";
	cin>>choice;
	switch(choice)
	{
		case 1: system("cls"); push(); goto DO; break;
		case 2: system("cls"); pop(); goto DO; break;
		case 3: system("cls"); display(); goto DO; break;
		case 4: system("cls"); view_top(); goto DO; break;
		case 5: return 0; break;
		
	}
	
}

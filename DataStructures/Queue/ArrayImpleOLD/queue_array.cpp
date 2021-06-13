#include<bits/stdc++.h>
using namespace std;

#define size 100
int a[size],front = -1,rear = -1;

bool isempty()
{
	if(front == -1)
		return true;
	else 
		return false;
}
void push()
{
	if(rear==size-1)
	{
		cout<<"Queue Overflow\n";
		return;
	}
	int val;
	cout<<"Enter Element : ";
	cin>>val;
	if(isempty())
	{
		front = rear = 0;
		a[rear] = val;
	}
	else
	{
		a[++rear] = val;
	}
	cout<<"Element Entered\n";
}
void pop()
{
	if(isempty())
	{
		cout<<"Queue Underflow No element to Delete\n";
		return;
	}
	else if(front == rear)
	{
		front = rear = -1;
	}
	else
	{
		front++;
	}
	cout<<"Element Deleted\n";
}
void view_front()
{
	cout<<"Front element in Queue is : "<<a[front]<<endl;
}
void display()
{
	if(isempty())
	{
		cout<<"Queue Underflow No element to Display\n";
		return;
	}
	for(int i=front; i<=rear; i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int choice=0;
	DO:
	cout<<"Enter Queue operation:\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.FRONT ELEMENT\n5.EXIT\n";
	cin>>choice;
	switch(choice)
	{
		case 1: system("cls"); push(); goto DO; break;
		case 2: system("cls"); pop(); goto DO; break;
		case 3: system("cls"); display(); goto DO; break;
		case 4: system("cls"); view_front(); goto DO; break;
		case 5: return 0; break;
		
	}
	
}


#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

struct node *front=NULL,*rear=NULL;

bool isempty()
{
	if(front == NULL)
		return true;
	else
		return false;
}
void push()
{
	struct node* newnode = new node();
	cout<<"Enter Value : ";
	cin>>newnode->data;
	newnode->next = NULL;
	if(isempty())
	{
		front = rear = newnode;
	}
	else
	{
		rear->next = newnode;
		rear = newnode;
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
		front = rear = NULL;
	}
	else
	{
		front = front->next;
	}
	cout<<"Element Deleted\n";
}
void view_front()
{
	cout<<"Front Element in Queue is : "<<front->data;
}
void display()
{
	if(isempty())
	{
		cout<<"Queue Underflow No element to Display\n";
		return;
	}
	struct node *temp = front;
	while(temp != NULL)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
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


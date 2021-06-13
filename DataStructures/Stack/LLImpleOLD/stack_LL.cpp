#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node *next;
};

struct node *top = NULL;

void push()
{
	struct node *newnode = new node();
	cout<<"Enter Value : ";
	cin>>newnode->data;
	newnode->next = NULL;
	if(top == NULL)
	{
		top = newnode;
	}
	else
	{
		newnode->next = top;
		top = newnode;
	}
	cout<<"Element Entered\n";
}
void pop()
{
	if(top == NULL)
	{
		cout<<"Stack Underflow\n";
	}
	else
	{
		top = top->next;
		cout<<"Element Deleted\n";
	}
}
void view_top()
{
	cout<<"TOP Element of Stack is : "<<top->data<<endl;
}
void display()
{
	struct node *temp = top;
	if(temp == NULL)
	{
		cout<<"No Elements in Stack (Stack Underflow)";
	}
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


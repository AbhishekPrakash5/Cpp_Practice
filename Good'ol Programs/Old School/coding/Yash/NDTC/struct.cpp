#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int sz=0;
struct student
{
	char name[30];
	int roll;
	int marks;
	char gender[10];
	
}stud[10];
void read()
{
	
	cout<<"Enter total no of student ";
	cin>>sz;
	for(int i=0 ; i<sz ; i++)
	{
		cout<<"Enter name ";
		gets(stud[i].name);
		cout<<"Enter Roll No. ";
		cin>>stud[i].roll;
		cout<<"Enter gender ";
		cin>>stud[i].gender;
		cout<<"Enter marks ";
		cin>>stud[i].marks;
	}
}

void display()
{
	for(int i=0 ; i<sz ; i++)
	{
		cout<<"Name "<<stud[i].name<<endl;
		cout<<"Roll No. "<<stud[i].roll<<endl;
		cout<<"Gender "<<stud[i].gender<<endl;
		cout<<"Marks "<<stud[i].marks<<endl;
	}	
}
void dispsel(int x)
{
	for(int i=0 ; i<sz ; i++)
	{
		if(stud[i].roll==x)
		{	cout<<"Roll "<<stud[i].roll<<endl;			
			cout<<"Name "<<stud[i].name<<endl;
			cout<<"Marks "<<stud[i].marks<<endl;
			cout<<"Gender "<<stud[i].gender<<endl;
		}
		
	}
		cout<<"Not found"; 
}
void main()
{	
	int a=0;
	read();
	cout<<"Enter roll no. to search ";
	cin>>a;
	dispsel(a);
	display();
	
	getch();
}
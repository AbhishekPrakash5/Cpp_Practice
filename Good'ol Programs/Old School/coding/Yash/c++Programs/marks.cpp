#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<iomanip.h>
int main()
{	char name[35],ans;
	float a;
	float b;
	float c;
	float d;
	float e;
	float sum;
	float percentage;
	
	do {
	clrscr();
	cout<<"Enter your name:";
	gets (name);
	cout<<"Enter Marks of subject A:"<<endl;
	cin>>a;
	cout<<"Enter Marks of subject B:"<<endl;
	cin>>b;
	cout<<"Enter Marks of subject C:"<<endl;
	cin>>c;
	cout<<"Enter Marks of subject D:"<<endl;
	cin>>d;
	cout<<"Enter Marks of subject E:"<<endl;
	cin>>e;
	sum=a+b+c+d+e;
	percentage=sum/5;
	cout<<"Hello Master/Miss "<< name<<endl;
	cout<<"Your marks out of 500 is:"<<setprecision(3)<<sum<<endl;
	cout<<"Your percentage is:"<<setprecision(3)<<percentage<<"%"<<endl;
	cout<<"IF you want to enter more press Y or y, IF not then enter any other letter?";
	cin >>ans;
	} while(ans=='Y'||ans=='y');
	return 0;
	}
#include<iostream>
#include<cstdio>
using namespace std;
char name[10][30];
int main()
{
	int sz;
	cout<<" how many names do u want to enter ";
	cin>>sz;
	cout<<" enter names ";
	for(int i=0;i<=sz;i++)
	{
		gets(name[i]);
	}
	cout<<" names are ";
	for(int b=0;b<=sz;b++)
	{
		cout<<name[b]<<endl;
	}
	return 0;
}

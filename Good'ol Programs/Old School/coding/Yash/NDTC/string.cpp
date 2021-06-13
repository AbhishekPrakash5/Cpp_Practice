#include<iostream>
using namespace std;
int main()
{	int count=0;
	char str[100];
	cout<<"enter string ";
	gets(str);
	for(int i=0;str[i]!='\0';i++)
	{
		if(str[i]=='a')
			count++;
	}
	cout<<count;
	return 0;
}

#include<iostream>
#include<conio.h>
using namespace std;
void patt()
{
	for(int i=1; i<=5; i++)
	{
		for(int j=1; j<=i; j++)
		cout<<"  "<<j;
	
		cout<<endl;
	}
	
}
int main()
{
	patt();
	return 0;
}

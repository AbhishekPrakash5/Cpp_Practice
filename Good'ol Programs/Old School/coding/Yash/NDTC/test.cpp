#include<iostream>
#include<conio.h>
using namespace std;
void fact( int n )
{	
	int fact=1;
	if(n!=0)
	{
		if(n!=1)
		{
			for(int i=n; i>1; i--)
				{
					fact *= i;
					cout<<i<<" x ";	
				}	
				cout<<"1 = "<<fact;
		}
		else
			cout<<"1 factorial is 1";
		
		
	}
	else
		cout<<"0 factorial is 1";

}
int main()
{
	int num;
	cout<<"enter a no. of which u want factorial ";
	cin>>num;
	fact(num);
	return 0;
}

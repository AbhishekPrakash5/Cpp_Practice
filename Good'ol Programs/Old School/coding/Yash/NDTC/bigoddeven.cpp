#include<iostream>
#include<conio.h>
using namespace std;
void bigoddeven()
{
	int bigodd=0, bigeven=0, a=0;
	do
	{
		cout<<"enter a no. ";
		cin>>a;
		if ( a !=0 )
		{
			if( a%2==0)
				if(bigeven<a)
					bigeven=a;
			else
				if(bigodd<a)
					bigodd=a;
						
		}
	}while(a!=0);
		
}
int main()
{
	bigoddeven();
	return 0;
}
	

#include<iostream>
using namespace std;
void oddeven()
{
	int totodd=0, toteven=0, a=0;
	do
	{
		cout<<"Enter a no. ";
		cin>>a;
		if(a!=0)
		{
			if(a%2==0)
			{
				toteven++;
			
			}
			else
			{
				totodd++;
			}	
		}
	}while(a!=0);
	cout<<"total even is "<<toteven<<"\ntotal odd is "<<totodd;
}
int main()
{
	oddeven();
	return 0;
}

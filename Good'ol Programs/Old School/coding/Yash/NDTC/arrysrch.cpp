#include<iostream.h>
#include<conio.h>

int Lsearch(int A[],int s,int N)
	{	int pos;
		for(int i=0;i<s;i++)
		if(A[i]==N)
		return i;
		return-1;

	}
void main()
{	
	int A[10],item,size,pos;
	cout<<"ENTER SIZE OF ARRAY ";
	cin>>size;
	cout<<"ENTER ARRAY ELEMENT ";
		for(int i=0;i<size;i++);
			cin>>A[i];
	cout<<"ENTER ELEMENT TO BE SEARCHED";
	cin>>item;
	pos=Lsearch(A,size,item);
	if(pos==-1)
	cout<<"ELEMENT NOT FOUND ";
	else
	cout<<"ELEMENT FOUND AT"<<pos+1;
	getch();
}
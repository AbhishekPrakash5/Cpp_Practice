#include<iostream.h>
#include<conio.h>
int add(int a , int b)
{ int z ;
  z=a+b;
  return z;
}
int sub(int a , int b)
{ int z ;
  z=a-b;
  return z;
}
void main()
	{ int x , y , ans;
	  char opt;
	  
	  cout<<"enter first no.";
	  cin>>x;
	  cout<<"enter second no.";
	  cin>>y;
	  redo:
	  cout<<"enter operator + or -\n";
	  cin>>opt;
	  
	  switch(opt)
		{
			case '+' : {ans=add(x,y);
						cout<<ans;
						break;
					   }
			case '-' : {ans=sub(x,y);
						cout<<ans;
						break;
					   }
		
			default:cout<<"chose correct operator";
			goto redo;
		}
	getch();
	}		
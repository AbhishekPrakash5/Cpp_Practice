#include<iostream.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>
char name[100];
 
void revName()
{
    int len = strlen(name);
    int p = 0;
    for(int i = len; i >= 0; i--)
	{
        if(name[i] == ' ')
		{
            p = i + 1 ;
            break;
        }
    }
 
 char temp[100];
    for(int j = p; j < len + 1; j++) 
	{
        temp[j - p] = name[j];
        name[j] = ' ';
    }
 
	// strcat(temp, " ");
	// strcat(temp, name);
	//cout<<temp;
    cout << temp<<" "<<name;
}
 
void main()
{
    cout << "Enter your name : ";
    gets(name);
    revName();
	getch();
 
}
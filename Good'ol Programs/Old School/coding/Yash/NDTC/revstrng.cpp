#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<conio.h>
char string[100];

void revString()
{
	int len = strlen(string);
	int p = 0;
	int q = 0;
	for(int i = 0; i <=len; i++)
	{
		if(string[i] == ' ' || string[i] == '\0')
		{
			q = i - 1;
			for(int j = 0; j <= (q - p)/2; j++)
			{
				char c = string[p + j];
				string[p + j] = string[q - j];
				string[q - j] = c;
			}

			p = i + 1;
		}
	}
}

void main()
{
	cout << "Enter a string : ";
	gets(string);
	revString();
	cout << string;
	getch();
}

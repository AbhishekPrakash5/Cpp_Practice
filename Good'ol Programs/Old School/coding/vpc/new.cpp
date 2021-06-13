#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
 int dd,mm,yy;
 char name[15];

 cout<<"please enter your name :";
 gets(name);
 cout<<"\nday of your birth? ";
 cin>>dd;
 cout<<"\nmonth of your birth? ";
 cin>>mm;
 cout<<"\nyear of your birth? ";
 cin>>yy;
  //getline(name);
 cout<<"\nhello mr./mrs."<<name<<"\n";
 cout<<"Your Birthday is "<<dd<<"/"<<mm<<"/"<<yy;
 //getch();
return 0;
}

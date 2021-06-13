#include<iostream.h>
#inclue<conio.h>
#include<stdio.h>
#include<string.h>

class Account
{
private:

char name[100];
int AccNo;
char type;
int BalAmt;

public:

Account();
void input();
void deposit();
void withdraw();
int RetAccNo();
};

Account::Account()
{
strcpy(name,"no name");
AccNo=0;
type='0';
BalAmt=0;
}
void Account::input()
{
cout<<"Enter your NAme ";
gets(name);
cout<<"Enter your Acount no. ";
cin>>AccNo;
cout<<"Enter type of account ";
gets(type);
cout<<"Enter your current balance ";
cin>>BalAmt;
}
void deposit()
{
cout<<"Enter the amount you want to deposit ";
cin
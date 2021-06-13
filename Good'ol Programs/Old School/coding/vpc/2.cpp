#include<iostream>
//#include<stdio.h>
//#include<conio.h>
#include<fstream>
#include<stdlib.h>
using namespace std ;
int main()
{
    char c,fname[10];
    ofstream out;
    cout<<"enter file name:";
    cin>>fname;
    out.open(fname);
    cout<<"enter content(# at end)\n";
    while ((c=getchar())!='#')
    {
        out<<c;
    }
    out.close();
    //getch();
    return 0;

}

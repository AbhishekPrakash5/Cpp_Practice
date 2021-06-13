#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std ;
int main()
{

    ofstream outfile;
    outfile.open("marks.dat",ios::app);
    char ans='y';
    int rollno;
    float marks;
    system("cls");
    while(ans=='y'||ans=='Y')
    {
    cout<<"\nenter rollno.:";
    cin>>rollno;
    cout<<"\nenter marks.:";
    cin>>marks;
    outfile<<rollno<<marks<<"\n";
    cout<<"continue?(y/n)....";
    cin>>ans;
    }
    outfile.close();
    return 0;

}

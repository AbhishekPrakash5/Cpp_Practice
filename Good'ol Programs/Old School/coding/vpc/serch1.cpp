#include<iostream>
#include<fstream>
using namespace std ;
struct stu{  int rollno;
            char name[25];
            char Class[4];
            float marks;
            char grade;


         }s1;

int main()
{
    int rn;char found='n';
    ifstream infile("stu.dat",ios::in|ios::binary);
    cout<<"Enter rollno to search :";
    cin>>rn;
    while(!infile.eof())
    {
        infile.read((char*)&s1,sizeof(s1));
        if (s1.rollno==rn)
        {
            cout<<s1.name<<",rollno"<<rn<<"has"<<s1.marks<<"%marks and"<<s1.grade<<"grade."<<endl;
            found='y';
            break;
        }
    }
    if(found=='n')
    cout<<"Rollno not found!"<<endl;
    infile.close();
    return 0;

}

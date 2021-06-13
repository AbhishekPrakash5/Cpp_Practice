#include<iostream>
#include<fstream>
#include<stdio.h>               //for rename() & remove()
using namespace std ;
struct stu{  int rollno;
            char name[25];
            char Class[4];
            float marks;
            char grade;
        public:
            void getdata()
            {
                cout<<"Rollno:";cin>>rollno;
                cout<<"Name  :";cin>>name;
                cout<<"Class :";cin>>Class;
                cout<<"Marks :";cin>>marks;
                if(marks>=75)grade='A';
                else if(marks>=75)grade='B';
                else if(marks>=75)grade='C';
                else if(marks>=75)grade='D';
                else grade='F';
            }

            void putdata()
            {
                cout<<name<<" ,Roll No. :"<<rollno<<" has "<<marks
                    <<"%  marks & "<<grade<<" grade."<<endl;
            }
            int getrno()
            {
                return rollno;
            }

         }s1,stud ;

int main()
{

    ifstream infile("stu.dat",ios::in);
    ofstream outfile("temp.dat",ios::out);
    int rno;char found='f',confirm='n';
    cout<<"Enter rollno to delete :";
    cin>>rno;
    while(!infile.eof())
    {
        infile.read((char*)&s1,sizeof(s1));
        if(s1.getrno()==rno)
        {
            s1.putdata();
            found='t';
            cout<<"sure to delete?(y/n) :";
            cin>>confirm;
            if(confirm=='n')
            outfile.write((char*)&s1,sizeof(s1));
        }
        else
            outfile.write((char*)&s1,sizeof(s1));
    }
    if(found=='f')
    cout<<"Rollno not found!\n";
    infile.close();
    outfile.close();
    remove("stu.dat");
    rename("temp.dat","stu.dat");
    infile.open("stu.dat",ios::in);
    cout<<"file contains : \n";
    while(!infile.eof())
    {


        infile.read((char*)&stud,sizeof(stud));
    if(infile.eof()) break;
    stud.putdata();
    }
    infile.close();
    return 0;

}

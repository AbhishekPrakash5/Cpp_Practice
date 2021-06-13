#include<iostream>
#include<fstream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>               //for rename() & remove()
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
            { return rollno;}
            void modify();

         }s1,stud ;
         void stu::modify()
         { cout<<"Roll No. :"<<rollno<<endl;
           cout<<"Name :"<<name<<"\t Class :"<<Class
           <<"\t Marks :"<<marks<<endl;
           cout<<"Enter New Details:"<<endl;
           char nm[20]="",cl[4]=" ";
           float mks;
           cout<<"New Name:(enter '.' to retain old one)";
           cin>>nm;
           cout<<"New Class:(enter '.' to retain old one)";
           cin>>cl;
           cout<<"New Marks:(press -1 to retain old one)";
           cin>>mks;
           if(strcmp(nm,".")!=0)
               strcpy(name,nm);
           if(strcmp(cl,".")!=0)
               strcpy(Class,cl);
           if(mks!=-1)
           {  marks=mks;
              if(marks>=75)       grade='A';
                else if(marks>=75)grade='B';
                else if(marks>=75)grade='C';
                else if(marks>=75)grade='D';
                else grade='F';

           }

         }

int main()
{   fstream iofile("stu.dat",ios::in|ios::out|ios::binary);
    //ofstream outfile("temp.dat",ios::out);
    int rno;long pos;char found='f';
    cout<<"Enter rollno to modify :";
    cin>>rno;
    while(!iofile.eof())
    {   pos=iofile.tellg();
        iofile.read((char*)&s1,sizeof(s1));
        if(s1.getrno()==rno)
        {   s1.modify();
            iofile.seekg(pos);
            iofile.write((char*)&s1,sizeof(s1));
            found='t';
            break;
        }
    }
    if(found=='f')
    cout<<"Rollno not found!\n";
    iofile.seekg(0);
    cout<<"Now the file contains : \n";
    while(!iofile.eof())
    {iofile.read((char*)&stud,sizeof(stud));
    stud.putdata();
    }
    iofile.close();
    return 0;

}

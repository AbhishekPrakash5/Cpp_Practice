#include<iostream>
#include<fstream>
using namespace std ;
class stu{  int rollno;
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
                else if(marks>=60)grade='B';
                else if(marks>=50)grade='C';
                else if(marks>=40)grade='D';
                else grade='F';
            }
            void putdata()
            {
                cout<<name<<",rollno"<<rollno<<"has"<<marks
                <<"%marks and"<<grade<<"grade."<<endl;
            }
            int getrno()
                {
                    return rollno;
                }

         }s1,stud;  //******

int main()
{
    ifstream infile("stu.dat",ios::in|ios::binary);
    ofstream outfile("temp.dat",ios::out|ios::binary);
    char ans='y';
    cout<<"enter details to be deleted\n";
    s1.getdata();
    while (infile.eof())
    while(ans=='y'||ans=='Y')
    {
    s1.getdata();
    outfile.write((char*)&s1,sizeof(s1));
    cout<<"record added...continue?(y/n)....";
    cin>>ans;
    }
    outfile.close();
    return 0;

}

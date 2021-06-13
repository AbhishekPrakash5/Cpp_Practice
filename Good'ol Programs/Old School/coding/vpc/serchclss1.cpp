#include<iostream>
#include<fstream>
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

         }s1;

int main()
{
    int rn;char found='n';
    ifstream infile("stu.dat",ios::in);
    cout<<"Enter rollno to search :";
    cin>>rn;
    while(!infile.eof())
    {
        infile.read((char*)&s1,sizeof(s1));
        if(s1.getrno()==rn)
        {
            s1.putdata();
            found='y';
            break;
        }
    }
    if(found=='n')
    cout<<"Rollno not found!"<<endl;
    infile.close();
    return 0;

}

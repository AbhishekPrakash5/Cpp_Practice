#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<fstream.h>
 
class stud{
        private:
            int rollno;
            char sname[30];
            int age;
            char _class[10];
            int marks;
        public:
            int retrollno(){return rollno;}
            void display();
            void input();
};
 
void stud::display(){
    printf("\nRoll number : %d \nName : %s \nAge : %d \nClass : %s \nMarks : %d\n", rollno, sname, age, _class, marks);
}
 
void stud::input(){
    cout << "Roll number : ";
    cin >> rollno;
    cout << "Name : ";
    gets(sname);
    cout << "Age : ";
    cin >> age;
    cout << "Class : ";
    gets(_class);
    cout << "Marks : ";
    cin >> marks;
}
 
 
void printMenu(){
    cout << "---------------------------------------\n";
    cout << "1. Write : a\n2. Search : b\n3. Display : c";
    cout << "\n---------------------------------------\n";
    cout << "Enter your choice : ";
}
 
void write(){
    stud s1;
    ofstream fout("P4.DAT", ios::app | ios::binary);
    char ch = 'y';
 
    while(ch == 'y'){
        s1.input();
   
        fout.write((char*) & s1, sizeof(s1));
        cout << "\n" << "Do you want to continue : ";
        cin >> ch;
        clrscr();
 
    }
    fout.close();
}
 
void read(){
    stud s2;
    int rollno;
    cout << "Enter roll number to search : ";
    cin >> rollno;
   
    ifstream fin("P4.DAT", ios::in | ios::binary);
    fin.seekg(0);
   
    int flag = 0;
   
    while(!fin.eof()){
        fin.read((char*)& s2, sizeof(s2));
       
        if(rollno == s2.retrollno()){
            flag = 1;
            s2.display();
        }
    }
   
    fin.close();
    if(!flag){
        cout << "\nRecord with given roll number is not found";
    }
}
 
void displayAll(){
    stud s2;
    fstream fin("P4.DAT", ios::in | ios::binary);
    fin.seekg(0);
   
    while(!fin.eof()){
        fin.read((char*)& s2, sizeof(s2));
        s2.display();
    }
}
 
void main(){
    char choice;
    printMenu();
   
    cin >> choice;
    clrscr();
   
    switch(choice){
        case 'a':
            write();
        break;
        case 'b':
            read();
        break;
        case 'c':
            displayAll();
        break;
        default:
            cout << "Invalid option :(";   
    }
   
    getch();
}
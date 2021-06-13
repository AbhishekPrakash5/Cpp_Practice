#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<process.h>
#include<fstream.h>

ifstream fin;
ofstream fout;

class bus{
	long int mon;
	long int tue;
	long int wed;
	long int thus;
	long int fri;
	long int sat;
	// we dont work on sunday.
	public:
	void insert_table();
    int dayo(char x[])
	{
		if(!strcmpi(x,"mon") )
		{	return mon;}
		
		else if (!strcmpi(x,"tue") )
		{	return tue;}
		
		else if (!strcmpi(x,"wed") )
			{	return wed;}
		
		else if (!strcmpi(x,"thus") )
			{	return thus;}
		
		else if (!strcmpi(x,"fri") )
			{	return fri;}
        
		else if (!strcmpi(x,"sat") )
			{	return sat;}	
		
		
	}	
}obj[20];

void bus::insert_table(){
	cout<<"Enter time for: m/t/w/th/f/sa/s ";
	cin>>mon>>tue>>wed>>thus>>fri>>sat;
}

class passenger: public bus{
	private:
	char from,to,day[4];                               // cities are ABCDE therefore only char not a string.
	int date,month,seatno;
	public:
	void insert_table()
	{
		cout<<"From location (A/B/C/D/E) : ";
		cin>>from;
		cout<<"To location (A/B/C/D/E) : ";
		cin>>to;
		cout<<"Date of travel : ";
		cin>>date;
		cout << "Month of travel : ";
		cin >> month;
		cout<<"Day of travel (mon/tue/wed/thus/fri/sat) : ";
		gets(day);
		
	}

	void book_ticket();
	int encrypt();
}po;

int passenger::encrypt(){   
	int x;
	if(po.from=='A'&&po.to=='B')
		x=0;
    else if(po.from=='A'&&po.to=='C')
		 (x=1);
	else if(po.from=='A'&&po.to=='D')
	 (x=2);
	else if(po.from=='A'&&po.to=='E')
	(x=3);
	else if(po.from=='B'&&po.to=='A')
	 (x=4);
	else if(po.from=='B'&&po.to=='C')
	 (x=5);
	else if(po.from=='B'&&po.to=='D')
	 (x=6);
	else if(po.from=='B'&&po.to=='E')
	 (x=7);
	else if(po.from=='C'&&po.to=='A')
		 (x=8);
	else if(po.from=='C'&&po.to=='B')
		 (x=9);
	else if(po.from=='C'&&po.to=='D')
		 (x=10);
	else if(po.from=='C'&&po.to=='E')
		 (x=11);
	else if(po.from=='D'&&po.to=='A')
	 (x=12);
	else if(po.from=='D'&&po.to=='B')
		 (x=13);
	else if(po.from=='D'&&po.to=='C')
	 (x=14);
	else if(po.from=='D'&&po.to=='E')
	 (x=15);
	else if(po.from=='E'&&po.to=='A')
(x=16);
	else if(po.from=='E'&&po.to=='B')
 (x=17);
	else if(po.from=='E'&&po.to=='C')
		 (x=18);
	else if(po.from=='E'&&po.to=='D')
	 (x=19);

return x; 
}

void passenger::book_ticket(){
	char xom[3];
	ifstream fin;
fin.open("schedule.dat",ios::binary);
	char ch='y',ch1;int obj_no;
	 
	 while(ch=='y')
	 {
		 po.insert_table();
	     obj_no=po.encrypt();
	 fin.read((char*)&obj[obj_no] , sizeof(obj[obj_no]));
	strcpy(xom,(po.day));
	if(obj[obj_no].dayo(xom)==0 )
		 cout<<"No buses available, transaction failed.\n";

	 
	 
	 else
	 {cout<<"Bus departure timing : "<<obj[obj_no].dayo( po.day)<<endl;
	 cout<<"Press 'y' to book another ticket : ";
	  cin>>ch1;
	      if(ch1=='y')
		cout<<"Ticket booked successfully!!\n";
	 
	 }
	 
	 cout<<"Press 'y' to book another ticket : ";
	 cin>>ch;
	 clrscr();
	 }
}

int strcomp(char c[], char s[]){
	int size = strlen(c) + 1;
	for(int i = 0; i < size; i++){
		if(c[i] != s[i]){
			return -1;
		}
	}
	
	return 0;
}

class Money{ 
  public:
  long int cardno, phone, acct;
  char bank[30],name[30], emailId[30], password[20];
  float amt,withdraw;

  Money()
  { cardno=phone=acct=0;
    amt=withdraw=0.0;
	strcpy(bank,strcpy(name,strcpy(emailId,strcpy(password, "NOT INITIALISED"))));	  
  }
  void Newacct();
  void pay(float);
  void add(float);
  void transfer(float);
	
}M;

void Money:: pay(float bill){ 
if(bill>amt)
	{ cout<<"Bill exceeds your current balance!!!";
	   getch();
	  exit(-1);
	}															//Bill payment...call wherever you are making payments
  amt-=bill;
  cout<<"****Transaction complete****";
	
}

 void Money:: transfer(float cash){	 
 int flag=0;
	 long mobno;
     cout<<"Enter the mobile no: ";
	 cin>>mobno;												//Transfering money to a particular phone no. 
	 fin.open("FILE.dat", ios::in| ios::binary);
	 while(!fin.eof()) 
	 { fin.read((char*)&M, sizeof(M));
       if(mobno==M.phone)
		 { amt-= cash;
		   flag=1;
		 } 
	 }
	 fin.close();
	 if(flag == 1)
	 { cout<<"Money Transfer complete";
	 }
	 else
	 { cout<<"\nPhone no. didn't match the saved data.";
	 }
	  
}

void Money:: add(float cash){ 
char mode[15];
    cout<<"Enter your mode of payment: \tCredit card\tDebit card\tNet banking\n";
    gets(mode);
	if(!strcmpi(mode,"Debit card"))
	{  cout<<"Enter your debit card no.: ";
	   cin>>cardno;
	   amt+=cash;	  
	}														//Adding money to the wallet
	if(!strcmpi(mode,"Net banking"))
	{	cout<<"Enter the bank: ";
		gets(bank);
		cout<<"Account no: ";
		cin>>acct;
		amt+=cash;	  
	}
	if(!strcmpi(mode,"Credit card"))
	{	cout<<"Enter your Credit card no.: ";
		cin>>cardno;
		amt+=cash;
	}
  }

class mobile{ 
  long int mobno ;
  char Opratr[15];
  float amount;
  public:
  void Getinfo()						/*For both postpaid & prepaid */
  { cout<<"Enter the mobile no.: ";
	cin>>mobno;
	cout<<"Enter the operator: ";
	gets(Opratr);
	cout<<"Enter the amount: ";
	cin>>amount;
	M.pay(amount);
	  
  }
}m;

class Electric{ 
  char state[15], board[25], city[15];
  long int consumer_no;
  float bill;
  public:
  void Enter()
  {	cout<<"Enter the following details: ";
    cout<<"\nState: ";
	gets(state);
    cout<<"\nCity: ";
	gets(city);
	cout<<"Electricity Board: ";
	gets(board);
	cout<<"consumer no: ";
	cin>>consumer_no;
	cout<<"Bill: ";
	cin>>bill;
	M.pay(bill);
  }
}e;

void Money::Newacct(){ 
    char code[20],ch;
    redo:
	cout<<"Enter the following details: ";
	cout <<"\nEnter phone number : ";
	cin >> phone;
	cout << "Enter account number : ";
	cin >> acct;
	cout << "Enter card number : ";
	cin >> cardno;
	cout<<"Name: ";
	gets(name);
	cout<<"\nEmail Id: ";
	gets(emailId);
	cout<<"\nPassword: ";
	gets(password);
	cout<<"\nConfirm password: ";
	gets(code);
	
	if(strcomp(code,password))
	{ cout<<"Incorrect";
	  getch();
	  clrscr();
	  goto redo;
	}
	
  }

void menu(){ 
  float deposit;
  char ch = 'y',opt;
  fout.open("FILE.dat", ios::app|ios::binary);
  
  do
  { 
	  cout<<"\n\n\t\tDeposit                      - a\n";
	  cout<<"\t\tTransfer money               - b\n";
	  cout<<"\t\tCreate new account           - c\n";
	  cout<<"\n\t\tEnter your choice: ";
	  cin>>opt;
	  clrscr();
	  switch(opt)
	  { case 'a': { cout<<"Enter the amount: ";
					cin>>deposit;
					M.add(deposit);
					fout.write((char*)&M,sizeof(M));
					break;
				  }
		case 'b': {	cout<<"Enter the amt to be transferred: ";
					cin>>deposit;
					M.transfer(deposit);
					fout.write((char*)&M,sizeof(M));
					break;
				  }
		case 'c': { M.Newacct();
					fout.write((char*)&M,sizeof(M));
					break;
				  }
		default: { cout<<"Invalid choice..!!";
				 }
		 
	  }  
	cout<<"\nGo back to menu: ";
	cin>>ch;
	clrscr();
  }while(ch=='y'||ch=='Y');
  
  fout.close();
}


class hotel{
    int room_no;
    char name[30];
    char address[50];
    char phone[10];
    
    public:
    void main_menu();    //to dispay the main menu
    void add();        //to book a room
    void display();    //to display the customer record
    void rooms();    //to display alloted rooms
    void edit();    //to edit the customer record
    int check(int);    //to check room status
    void modify(int);    //to modify the record
    void delete_rec(int);    //to delete the record
}h;
 
void hotel::main_menu(){
    int choice;
    
    while(choice!=5)
    {
        clrscr();
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\t\t\t\t* MAIN MENU *";
        cout<<"\n\t\t\t\t*************";
        cout<<"\n\n\n\t\t\t1.Book A Room";
        cout<<"\n\t\t\t2.Customer Record";
        cout<<"\n\t\t\t3.Rooms Allotted";
        cout<<"\n\t\t\t4.Edit Record";
        cout<<"\n\t\t\t5.Exit";
        cout<<"\n\n\t\t\tEnter Your Choice: ";
        cin>>choice;
        
        switch(choice)
        {
            case 1: add();
                    break;
            case 2: display();
                    break;
            case 3: rooms();
                    break;
            case 4: edit();
                    break;
            case 5: break;
            default:
                    {
                        cout<<"\n\n\t\t\tWrong choice!!!";
                        cout<<"\n\t\t\tPress any key to continue!!";
                        getch();
                    }
        }
    }
}
 
void hotel::add(){
    clrscr();
    int r,flag;
    ofstream fout("Record.dat",ios::app);
    
    cout<<"\n Enter Customer Detalis";
    cout<<"\n **********************";
    cout<<"\n\n Room no: ";
    cin>>r;
    flag=check(r);
    
    if(flag)
        cout<<"\n Sorry..!!!Room is already booked";
    else
    {
        room_no=r;
        cout<<" Name: ";
        gets(name);
        cout<<" Address: ";
        gets(address);
        cout<<" Phone No: ";
        gets(phone);
        fout.write((char*)this,sizeof(hotel));
        cout<<"\n Room is booked!!!";
    }
    
    cout<<"\n Press any key to continue!!";
    getch();
    fout.close();
}
 
void hotel::display(){
    clrscr();
    ifstream fin("Record.dat",ios::in);
    int r,flag;
    cout<<"\n Enter room no: ";
    cin>>r;
    
    while(fin.read((char*)this,sizeof(hotel)))
    {
        if(room_no==r)
        {
            clrscr();
            cout<<"\n Cusromer Details";
            cout<<"\n ****************";
            cout<<"\n\n Room no: "<<room_no;
            cout<<"\n Name: "<<name;
            cout<<"\n Address: "<<address;
            cout<<"\n Phone no: "<<phone;
            flag=1;
            break;
        }
    }
    
    if(flag==0)
        cout<<"\n Sorry Room no. not found or vacant!!";
        
    cout<<"\n\n Press any key to continue!!";
    getch();
    fin.close();
}
 
void hotel::rooms(){
    clrscr();
    ifstream fin("Record.dat",ios::in);
    cout<<"\n\t\t\tList Of Rooms Allotted";
    cout<<"\n\t\t\t*********************";
    cout<<"\n\n Room No.\tName\t\tAddress\t\tPhone No.\n";
    
    while(fin.read((char*)this,sizeof(hotel)))
    {
        cout<<"\n\n "<<room_no<<"\t\t"<<name;
        cout<<"\t\t"<<address<<"\t\t"<<phone;
    }
    
    cout<<"\n\n\n\t\t\tPress any key to continue!!";
    getch();
    fin.close();
}
 
void hotel::edit(){
    clrscr();
    int choice,r;
    
    cout<<"\n EDIT MENU";
    cout<<"\n *********";
    cout<<"\n\n 1.Modify Customer Record";
    cout<<"\n 2.Delete Customer Record";
    
    cout<<"\n Enter your choice: ";
    cin>>choice;
    
    clrscr();
    cout<<"\n Enter room no: ";
    cin>>r;
    
    switch(choice)
	
    {
        case 1: modify(r);
		
                break;
				
        case 2: delete_rec(r);
		
                break;
				
        default: cout<<"\n Wrong Choice!!";
		
    }
    
    cout<<"\n Press any key to continue!!!";
    getch();
}
 
int hotel::check(int r){
    int flag=0;
    ifstream fin("Record.dat",ios::in);
    while(fin.read((char*)this,sizeof(hotel)))
    {
        if(room_no==r)
        {
            flag=1;
                break;
        }
    }
    
    fin.close();
    return(flag);
}
 
void hotel::modify(int r){
    long pos,flag=0;
    fstream file("Record.dat",ios::in|ios::out|ios::binary);
    
    while(file.read((char*)this,sizeof(hotel)))
		
    {

        if(room_no==r)
        {
            cout<<"\n Enter New Details";
            cout<<"\n *****************";
            cout<<"\n Name: ";
            gets(name);
            cout<<" Address: ";
            gets(address);
            cout<<" Phone no: ";
            gets(phone);
            
            file.seekg(pos);
            file.write((char*)this,sizeof(hotel));
            cout<<"\n Record is modified!!";
            flag=1;
            break;
        }
		pos=file.tellg();
    }
    
    if(flag==0)
        cout<<"\n Sorry Room no. not found or vacant!!";
        
    file.close();
}
 
void hotel::delete_rec(int r){
    int flag=0;
    char ch;
    ifstream fin("Record.dat",ios::in);
    ofstream fout("temp.dat",ios::out);
    
    while(fin.read((char*)this,sizeof(hotel)))
    {
        
        if(room_no==r)
        {
            cout<<"\n Name: "<<name;
            cout<<"\n Address: "<<address;
            cout<<"\n Pone No: "<<phone;
            cout<<"\n\n Do you want to delete this record(y/n): ";
            cin>>ch;
            
            if(ch=='n')
            fout.write((char*)this,sizeof(hotel));
            
            flag=1;
        }
        else
            fout.write((char*)this,sizeof(hotel));
    }
    
    fin.close();
    fout.close();
    
    if(flag==0)
        cout<<"\n Sorry room no. not found or vacant!!";
    else
    {
        remove("Record.dat");
        rename("temp.dat","Record.dat");
    }
}

class Menu {
	public:	
		int numItems;
		char name[50];
		int selectedItem;
		int space;
		int x;
		int y;
		int width;
		int height;
		void printBorder() const ;
		
		Menu(int _numItems, char _name[50], int _selectedItem, int _space, int _x, int _y, int _width, int _height){
			numItems = _numItems;
			strcpy(name, _name);
			selectedItem = _selectedItem;
			space = _space;
			x = _x;
			y = _y;
			width = _width;
			height = _height;
		}
		
		Menu(){}
		void highlightNext();
		void highlightPrev();
};

void Menu::highlightNext(){
	selectedItem = (selectedItem >= numItems) ?  1 : selectedItem + 1;

}

void Menu::highlightPrev(){
	selectedItem = (selectedItem <= 1) ?  numItems : selectedItem - 1;
}

void spaces(int n){
	for(int i = 0; i < n; i++){
		cout << " ";
	}
}

int strcomp(char c[], char s[], int size){
	for(int i = 0; i < size; i++){
		if(c[i] != s[i]){
			return -1;
		}
	}
	
	return 0;
}

class MainMenu : public Menu {
	private:	
		char mainItems[5][30];
		void initMainItems(char c[5][30], int size);
	public:
		MainMenu() : Menu(0, " ", 0, 0, 0, 0, 0, 0) {}
		MainMenu(char c[5][30] ,int size) : Menu(size, "Main", 1, 1, 20, 3, 40, 20){initMainItems(c, size);}
	
		void printMainMenu() const;
		void interact();
};

void MainMenu::initMainItems(char c[5][30], int size){
	for(int i = 0; i < size; i++){
		strcpy(mainItems[i], c[i]);
	}

}

void MainMenu::printMainMenu() const {
	for(int i = 0;i < numItems; i++){
		gotoxy(x + 15, 2*(i + space) + y + 3 );
		
		if( (i + 1) == selectedItem){
			textcolor(0xA);
		}else{
			textcolor(7);
		}
		cprintf(mainItems[i]);
	}
	
}

class Credentials {
	public:
		char username[8];
		char password[8];
};

class SignUpMenu : public Menu {
	private :
		Credentials curCredential; 
		int usernameFlag;
		int passwordFlag;
	public :
		SignUpMenu() : Menu(5, "SignUpMenu", 1, 2, 20, 3, 40, 20), usernameFlag(0), passwordFlag(0) {}
		
		void printSignUpMenu() const;
		void interact();
};

class  MENUS {
	public :
		static const int SIGNUP;
		static const int  MAIN;
		static int CURRENT;
		static int MENUCHANGE;
		static void printCurMenu(MainMenu& m, SignUpMenu &s);
		static void highlightNext(MainMenu& m, SignUpMenu &s);
		static void highlightPrev(MainMenu& m, SignUpMenu &s);
		static void interact(MainMenu& m, SignUpMenu &s);
};

const int MENUS::SIGNUP = 0;
const int MENUS::MAIN = 1;
int MENUS::CURRENT = 0;
int MENUS::MENUCHANGE = 0;

void MainMenu::interact(){
	if(selectedItem == 1){
		h.main_menu();
		getch();
	}else if(selectedItem == 2){
		clrscr();
		menu();
	}else if(selectedItem == 3){
		clrscr();
		po.book_ticket();
	}else if(selectedItem == 4){
		clrscr();
		e.Enter();
		getch();
	}else if(selectedItem == 5){
		clrscr();
		m.Getinfo();
		getch();
	}else if(selectedItem == 6){
		exit(-1);
	}
}

void SignUpMenu::interact(){
	int offset = 5;
	
	if(selectedItem == 1){
		if(usernameFlag) for(int i = 0; i < 8; i++) {
			curCredential.username[i] = ' ';
			gotoxy(x + 12 + 11 + i, space + y + offset ); 
			cout << curCredential.username[i]; 
		}
		
		int numChar = 0;
		while(numChar < 8 && numChar >= 0){
			char c = getch();
			if(!isalnum(c)){
				if(c == 13) break;
				numChar--;
				continue;
			}  	
			
			curCredential.username[numChar] = c;
			gotoxy(x + 12 + 11 + numChar, space + y + offset );
			cout << curCredential.username[numChar];
			numChar++;
		}
		
		usernameFlag = 1;
	}else if (selectedItem == 2){
		if(passwordFlag) for(int i = 0; i < 8; i++) {
			curCredential.password[i] = ' ';
			gotoxy(x + 12 + 11 + i, 2 + space + y + offset ); 
			cout << curCredential.password[i]; 
		}
		
		int numChar = 0;
		while(numChar < 8 && numChar >= 0){
			char c = getch();
			if(!isalnum(c)){
				if(c == 13) break;
				numChar--;
				continue;
			}  	
			curCredential.password[numChar] = c;
			gotoxy(x + 12 + 11 + numChar,2 + space + y + offset );
			cout << "*";
			numChar++;
		}
	
		passwordFlag = 1;
	}else if (selectedItem == 3){
		exit(0);
	}else if(selectedItem == 4){
		Credentials c;
		int flag = 0;
		ifstream fin("a.dat", ios::binary | ios::in);

		if(fin == NULL){
			gotoxy(x + 12, space + y + offset + 9 );
			cout << "Database not found."; 
			getch();
			exit(0);
		}
		
		while( fin.read((char*)& c, sizeof(c)) ){
			if( (!strcomp(c.username, curCredential.username, 8)) ){
				gotoxy(x + 12, space + y + offset + 9 );
				cout << "Invalid username.";
				getch();
				gotoxy(x + 12 , space + y + offset + 9 );
				spaces(25);
				flag = 1;
			}
		}
		
		fin.close();

		if(!flag){
			ofstream fout("Database.dat", ios::binary | ios::app);
			if(fout != NULL){
				fout.write((char*)& curCredential, sizeof(curCredential));
				gotoxy(x + 12, space + y + offset + 9 );
				cout << "Account created.";
				getch();
				gotoxy(x + 12, space + y + offset + 9 );
				spaces(16);
			}
			fout.close();
		}
		
	}else if(selectedItem == 5){
		Credentials c;
		int flag = 0;
		ifstream fin("Database.dat", ios::binary | ios::in);

		if(fin == NULL){
			gotoxy(x + 12, space + y + offset + 9 );
			cout << "Database not found."; 
			getch();
			exit(0);
		}
		
		while( fin.read((char*)& c, sizeof(c)) ){
			if( (!strcomp(c.username, curCredential.username, 8)) && 
				(!strcomp(c.password, curCredential.password, 8)) ){
				gotoxy(x + 12, space + y + offset + 9 );
				MENUS::CURRENT = MENUS::MAIN;
				MENUS::MENUCHANGE = 1;
				flag = 1;
			}
		}
		
		if(!flag){
			gotoxy(x + 12, space + y + offset + 9 );
			cout << "Account not found.";
			getch();
			gotoxy(x + 12 , space + y + offset + 9 );
			spaces(25);
		}
	
	}
}

void SignUpMenu::printSignUpMenu() const {
	int offset = 5;
	
	if(selectedItem == 1){textcolor(0xA);}else{textcolor(7);}
	gotoxy(x + 12, space + y + offset );
	cprintf("Username : ");
	
	if(selectedItem == 2){textcolor(0xA);}else{textcolor(7);}	
	gotoxy(x + 12, 2 + space + y + offset );
	cprintf("Password : ");	
	
	if(selectedItem == 3){textcolor(0xA);}else{textcolor(7);}
	gotoxy(x + 8, 7 + space + y + offset );
	cprintf("Exit");
	
	if(selectedItem == 4){textcolor(0xA);}else{textcolor(7);}
	gotoxy(x + 16, 7 + space + y + offset );
	cprintf("Sign Up");

	if(selectedItem == 5){textcolor(0xA);}else{textcolor(7);}
	gotoxy(x + 27, 7 + space + y + offset );
	cprintf("Login");

}

void MENUS::printCurMenu(MainMenu& m, SignUpMenu &s) {
	if(MENUS::MENUCHANGE) clrscr();
	
	switch(MENUS::CURRENT){
		case MENUS::SIGNUP:
			s.printSignUpMenu();
			break;
		case MENUS::MAIN:
			m.printMainMenu();
			break;
	}
}

void MENUS::highlightNext(MainMenu& m, SignUpMenu &s) {
	switch(MENUS::CURRENT){
		case MENUS::SIGNUP:
			s.highlightNext();
			break;
		case MENUS::MAIN:
			m.highlightNext();
			break;
	}
}

void MENUS::highlightPrev(MainMenu& m, SignUpMenu &s) {
	switch(MENUS::CURRENT){
		case MENUS::SIGNUP:
			s.highlightPrev();
			break;
		case MENUS::MAIN:
			m.highlightPrev();
			break;
	}

}

void MENUS::interact(MainMenu& m, SignUpMenu &s) {
	switch(MENUS::CURRENT){
		case MENUS::SIGNUP:
			s.interact();
			break;
		case MENUS::MAIN:
			m.interact();
			break;
	}
}

void mainProgram(){
	char mainMenuItems[6][30] = {"Hotel booking", "Money transactions", "Bus booking", "Electricity bill", "Mobile bill" ,"Exit"}; 
	
	MainMenu m(mainMenuItems, 6);
	//mainM.printMainMenu();
	SignUpMenu s;
	MENUS::printCurMenu(m, s);
	
	int flag = 1;
	while(flag == 1){
		switch(getch()){
			case 'w':
				MENUS::highlightPrev(m, s);
				break;
			case 's':
				MENUS::highlightNext(m, s);
				break;
			case 13:
				MENUS::interact(m, s);
				break;
		}
		MENUS::printCurMenu(m, s);
	}
}

void main(){
	mainProgram();
	getch();
}
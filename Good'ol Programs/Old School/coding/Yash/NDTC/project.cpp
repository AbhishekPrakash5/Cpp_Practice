#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>
#include<process.h>
 
void sum (){
    cout << "Enter first number : ";
    int x , y;
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    clrscr();
    cout << x << " + " << y << " = " << (x+y);
}
 
void difference(){
    cout << "Enter first number : ";
    int x , y;
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    clrscr();
    cout << x << " - " << y << " = " << (x-y);
}
 
void product(){
    cout << "Enter first number : ";
    int x , y;
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    clrscr();
    cout << x << " X " << y << " = " << (x*y);
}
 
void division(){
    cout << "Enter first number : ";
    int x , y;
    cin >> x;
    cout << "Enter second number : ";
    cin >> y;
    clrscr();
    cout << x << " / " << y << " = " << ((float)x/y);
}
 
void power(){
    cout << "Enter base : ";
    int x , y;
    cin >> x;
    cout << "Enter exponent : ";
    cin >> y;
    clrscr();
    cout << x << "^" << y << " = " << pow(x,y);
}
 
void matrixSum(int flag){
    int a[3][3];
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter a number at location ( " << i+1 <<"," << j+1<< " ) : ";
            cin >> a[i][j];
        }
    }
   
    clrscr();
   
    int b[3][3];
    for( i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << "Enter a number at location ( " << i+1 <<"," << j+1 << " ) : ";
            cin >> b[i][j];
        }
    }
   
    clrscr();
   
    if(flag){
        cout << "Sum of matrices is \n";
        for( i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << (b[i][j] + a[i][j]) << " ";
            }
            cout << endl;
        }
    }else{
        cout << "Difference of matrices is \n";
        for( i = 0; i < 3; i++){
            for(int j = 0; j < 3; j++){
                cout << (b[i][j] - a[i][j]) << " ";
            }
            cout << endl;
        }
   
    }
   
}
 
 
 
void space(int n){
    for(int i = 0; i < n; i++){
        cout << " ";
    }
}
 
void printMenu(){
    space(20);
    cout << "Calculator ( Use w a s d keys to navigate ) : \n\n";
    space(30);
    cout << "1. Sum \n\n";
    space(30);
    cout << "2. Difference \n\n";
    space(30);
    cout << "3. Product \n\n";
    space(30); 
    cout << "4. Division \n\n";
    space(30);
    cout << "5. Power \n\n";
    space(30); 
    cout << "6. Matrix sum \n\n";
    space(30); 
    cout << "7. Matrix difference \n\n";
}
 
void calculate(int n){
    cout << "asda";
    clrscr();
    textcolor(15);
    switch(n){
        case 3:
            sum();
            break;
        case 5:
            difference();
            break;
        case 7:
            product();
            break;
        case 9:
            division();
            break;
        case 11:
            power();
            break;
        case 13:
            matrixSum(1);
            break;
        case 15:
            matrixSum(0);
            break;     
    }
	getch();
	clrscr();
	printMenu();
}
 
void main(){
    printMenu();
 
    int flag = 0;
    int x = 29;
    int y = 1;
    int ypre = y;
 
    while(1){ 
        if(kbhit()){
            ypre = y;
 
            char w = getch();
            switch(tolower(w)){
                case 'w':
                    if(y > 4){
                        flag = 1;
                        y -= 2;
                    }
 
                    break;
                case 's':
                    if(y <= 13){
                        flag = 1;
                        y += 2;
                    }
                    break;
                case 13:
                    clrscr();
                    calculate(y);
                    break;
                case 'q':
                    exit(0);
            }
           
            if(flag){
                textcolor(3);
                gotoxy(x, ypre);
                cout << " ";
                gotoxy(x, y);
                cprintf("*");
                flag = 0;
                textcolor(15);
            }
           
   
        }
    }
}
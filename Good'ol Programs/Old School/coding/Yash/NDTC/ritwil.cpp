#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstring>
#include<ctype.h>

#define clear() printf("\033[H\033[J")
#define column 3
#define row 3

int matrixA[row][column];
int matrixB[row][column];
int matrixR[row][column];

void display();
void sum(int rowno,int columnno);
int largestNumberInColumn(int matrix[row][column], int columnno);
void space(int num);


int numDigits(int num){
   if(num == 0){
        return 1;
   }
   num = abs(num); 
   int digits = 0;
   while(num != 0){
        int r = num % 10;
        num = (num - r)/ 10;
        digits++;
   } 
   return digits; 
}

void insert(int matrix[row][column]){

    for(int i = 0; i < row; i++){
        for(int j = 0; j < column; j++){
            display();
            printf("Enter the integer at position (%d, %d) :- ", i+1, j+1);
            std::cin >> matrix[i][j];
            sum(i,j);
            clear();
        }
    }

}

void displayRow(int matrix[row][column], int rowno){
    for(int i = 0; i < column; i++){
        std::cout << matrix[rowno][i];
        int highest = largestNumberInColumn(matrix, i);
       if(i != column - 1){
            space(1 + (highest - numDigits(matrix[rowno][i]) ) );
        }
    }
}

void space(int num){
    for(int i = 0;i < num; i++){
        std::cout << " ";
    }
}

int largestNumberInColumn(int matrix[row][column], int columnno){
    int number = 0;
    int temp = 0;
    for(int i = 0; i < row; i++){
        temp += numDigits(matrix[i][columnno]);

        if(number < temp){
            number = temp;
        }
        temp = 0;
    }
    
    return number;
}

void display(){
    for(int i = 0; i < row; i++){
       int hA = largestNumberInColumn(matrixA, column - 1);
       int hB = largestNumberInColumn(matrixB, column - 1);
       displayRow(matrixA,i);
       space(3 + (hA - numDigits(matrixA[i][column - 1])) );

       displayRow(matrixB,i);
       space(3 + (hB - numDigits(matrixB[i][column - 1])) );

       displayRow(matrixR,i);
      
       std::cout << "\n";
    }

}

void sum(int rowno,int columnno){
    matrixR[rowno][columnno] = matrixA[rowno][columnno] + matrixB[rowno][columnno];     
}

void editEntry(int matrix[row][column]){
    int rowno = 0;
    int columnno = 0;
    clear();
    display();
    std::cout << "Which entry you want to edit (row, column) :- \n";
    std::cout << "Enter the row :-  ";
    std::cin >> rowno;
    std::cout << "Enter the column :- ";
    std::cin >> columnno;

    clear(); display(); } 
	int main()
	{ memset(matrixA, 0, row*column*sizeof(int)); memset(matrixB, 0, row*column*sizeof(int)); memset(matrixR, 0, row*column*sizeof(int)); std::cout << numDigits(1) << "\n"; insert(matrixA); insert(matrixB); display(); char temp; int flag = 1; while(flag){ std::cout << "Which matrix you want to edit ? (a/b) "; std::cin >> temp; switch(tolower(temp)){ case 'a': editEntry(matrixA); break; case 'b': editEntry(matrixB); break; default: flag = 0; break; } } return 0; }



#include <iostream>
using namespace std;

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

void sort(int a[], int n){
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(a[j] > a[j+1])
                swap(&a[j],&a[j+1]);
}

void print(int a[], int n){
    for(int i=0; i<n; i++) cout<<a[i]<<" ";
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<"Before Sorting : - \n";
    print(a,n);
    sort(a,n);
    cout<<"After Sorting : - \n";
    print(a,n);
}
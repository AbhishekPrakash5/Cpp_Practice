#include<bits/stdc++.h>
using namespace std;

void input(vector < vector < float > > &a, int n){
    for(int i=0; i<n; i++){
        float val;
        for(int j=0; j<n; j++){
            cin>>val;
            a[i][j] = val;
        }
    }
}

void output(vector < vector < float > > a, int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<a[i][j]<<"    ";
        }
        cout<<endl;
    }
}

void output1(vector < float > a, int n){
    for(int j=0; j<n; j++){
        cout<<a[j]<<"    ";
    }
    cout<<endl;
}

vector < vector < float > > transpose(vector < vector < float > > a, int n){
    vector < vector < float > > res(n, vector < float > (n));
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            res[j][i] = a[i][j];
        }
    }
    return res;
}

void newcal(vector < vector < float > > &a, vector < float > &res, int n, int row){
    float temp = a[row][row];
    for(int j=0; j<n; j++){
        a[row][j] /= temp;
    }
    for(int i=0; i<n; i++){
        if( i != row ){
            float temp2 = a[i][row];
            res[i] -= (temp2 * res[row]);
            for(int j=0; j<n; j++){
                a[i][j] -= (temp2 * a[row][j]); 
            }
        }
    }
    //output(a, n); cout<<endl;
    //cout<<"res\n";output1(res, n); cout<<endl;
} 

vector < float > cal(vector < vector < float > > a, int n){
    vector < float > res(n);
    // Calculations
    // Calculating Transpose
    vector < vector < float > > trans = transpose(a, n);
    //cout<<" transpose\n";output(trans, n); cout<<endl;
    
    // Ptranspose - I
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == j){
                trans[i][j] -= 1;
            }
        }
    }
    //cout<<" transpose - identity\n"; output(trans, n); cout<<endl;
    
    // Adding 1 in 1st row and res vector's first element
    for(int j=0; j<n; j++){
        trans[0][j] += 1;
    }
    res[0] = 1;
    //cout<<"added 1 in res \n"; output1(res, n); cout<<endl;
    //cout<<"added 1 in transpose \n"; output(trans, n); cout<<endl;
    
    // Solution of Matrix
    for(int row=0; row<n; row++){
        res[row] /= trans[row][row];
        newcal(trans, res, n, row);
    }
    //cout<<"tranpose matrix converted to identity\n"; output(trans, n); cout<<endl;
    //cout<<"final result\n "; output1(res, n); cout<<endl;
    
    return res;
}

int main(){
    int n;
    cin>>n;
    vector < vector < float > > tpm(n, vector < float > (n));
    
    input(tpm, n);
    output(tpm, n); cout<<endl;
    
    vector < float > ans = cal(tpm, n);
    output1(ans, n); cout<<endl;
    
}
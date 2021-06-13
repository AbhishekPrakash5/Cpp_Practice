#include <bits/stdc++.h>
#define ll unsigned int
#define iAmSpeed ios_base::sync_with_stdio(false); cin.tie(NULL);
#define f(i,n) for(ll i = 0; i < n; i++)

using namespace std;

ll countSetBits(ll n){
    ll count = 0;
    while(n){
        n &= (n - 1);
        count++;
    }
    return count;
}

int main(){
    // fast io
    iAmSpeed

    freopen("input.txt", "r", stdin);

    ll t;
    cin>>t;
    while(t--){
        ll n,q;
        cin>>n>>q;
        
        ll a[n];
        f(i,n) cin>>a[i];// array input

        ll setBitCountOfA[n];
        f(i,n){ setBitCountOfA[i] = countSetBits(a[i]); } // setbit count of given array A
        ll numEven = 0, numOdd = 0;
        f(i,n){ setBitCountOfA[i] % 2 == 0 ? numEven++ : numOdd++; }

        while(q--){
            ll p, pSetBitCount = 0, countEvenOnes = 0, countOddOnes = 0;
            cin>>p;
            pSetBitCount = countSetBits(p);

            if(pSetBitCount % 2 != 0){ 
                countEvenOnes += numOdd;// odd countofBitSets(b's) ^ with odd countofBitSet(p) = even
                countOddOnes += numEven;// even countofBitSets(b's) ^ with odd countofBitSet(p) = odd
            }
            else{ 
                countEvenOnes +=numEven;// vice versa
                countOddOnes += numOdd;
            }
            
            cout<<countEvenOnes<<" "<<countOddOnes<<""\n"";
        }      
    }
    return 0;
}
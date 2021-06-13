// C++ program to build the smallest number by removing 
// n digits from a given number 
#include<bits/stdc++.h>
#include <sstream>
using namespace std; 

void insertInNonDecOrder(deque<char> &dq, char ch) 
{ 
	// if container is empty , insert the current digit 
	if (dq.empty()) 
		dq.push_back(ch); 

	else
	{ 
		char temp = dq.back(); 

		// Keep removing digits larger than current digit 
		// from the back side of deque 
		while( temp > ch && !dq.empty()) 
		{ 
			dq.pop_back(); 
			if (!dq.empty()) 
				temp = dq.back(); 
		} 
		dq.push_back(ch); // insert the current digit 
	} 
	return; 
} 

string buildLowestNumber(string str, int n) 
{ 
	int len = str.length(); 

	// deleting n digits means we need to print k digits 
	int k = len - n; 

	deque<char> dq; 
	string res = ""; 

	// leaving rightmost k-1 digits we need to choose 
	// minimum digit from rest of the string and print it 
	int i; 
	for (i=0; i<=len-k; i++) 

		// insert new digit from the back side in 
		// appropriate position and/ keep removing 
		// digits larger than current digit 
		insertInNonDecOrder(dq, str[i]); 

	// Now the minimum digit is at front of deque 
	while (i < len) 
	{ 
		// keep the minimum digit in output string 
		res += dq.front(); 

		// remove minimum digit 
		dq.pop_front(); 

		// Again insert new digit from the back 
		// side in appropriate position and keep 
		// removing digits larger than current digit 
		insertInNonDecOrder(dq, str[i]); 
		i++; 
	} 

	// Now only one element will be there in the deque 
	res += dq.front(); 
	dq.pop_front(); 
	return res; 
} 

 
int main() 
{ 
	int test;
    cin>>test;

    
    string str = to_string(test),ans; 
	int n = 1;
    
	ans = buildLowestNumber(str, n); 
	stringstream geek(ans);

    int x =0;
    geek>>x;

    cout <<x; 
    return 0; 
} 


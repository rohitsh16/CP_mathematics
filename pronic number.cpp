// C/C++ program to check if a number is pronic or not 

#include<bits/stdc++.h> 
using namespace std; 

// function to check Pronic Number 
bool pronic_check(int n) 
{ 
	int x = (int)(sqrt(n)); 

	// Checking Pronic Number by 
	// multiplying consecutive numbers 
	if (x*(x+1)==n) 
		return true; 
	else
		return false; 
} 

// Driver Code 
int main(void) 
{ 
	int n = 56;	 
	pronic_check(n) == true? cout << "YES" : 
							cout << "NO"; 
	
	return 0; 
} 

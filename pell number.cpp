// Iterative Pell Number Series in C 
#include <stdio.h> 

// calculate nth pell number 
int pell(int n) 
{ 
	if (n <= 2) 
		return n; 

	int a = 1; 
	int b = 2; 
	int c, i; 
	for (i = 3; i <= n; i++) { 
		c = 2 * b + a; 
		a = b; 
		b = c; 
	} 
	return b; 
} 

// driver function 
int main() 
{ 
	int n = 4; 
	printf("%d", pell(n)); 
	return 0; 
} 

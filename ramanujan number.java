// JAVA Code for Taxicab Numbers 
import java.util.*; 

class GFG { 
	
	public static void printTaxicab2(int N) 
	{ 
		// Starting from 1, check every number if 
		// it is Taxicab until count reaches N. 
		int i = 1, count = 0; 
		while (count < N) 
		{ 
		int int_count = 0; 
	
		// Try all possible pairs (j, k) whose 
		// cube sums can be i. 
		for (int j = 1; j <= Math.pow(i, 1.0/3); j++) 
			for (int k = j + 1; k <= Math.pow(i, 1.0/3); 
												k++) 
				if (j * j * j + k * k * k == i) 
					int_count++; 
			
		// Taxicab(2) found 
		if (int_count == 2) 
		{ 
			count++; 
			System.out.println(count + " " + i); 
		} 
	
		i++; 
		} 
	} 
	
	/* Driver program to test above function */
	public static void main(String[] args) 
	{ 
		int N = 5; 
		printTaxicab2(N); 
		
	} 
} 
	
// This code is contributed by Arnav Kr. Mandal. 

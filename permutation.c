// C program to print all permutations with duplicates allowed 
#include <stdio.h> 
#include <string.h> 

void swap(char *x, char *y) 
{ 
	char temp; 
	temp = *x; 
	*x = *y; 
	*y = temp; 
} 

void permute(char *a, int i, int r) 
{ 
	int j; 
	if (i== r) 
		printf("%s\n", a); 
	else
	{	 
		for (j =i; j <= r; j++) 
		{ 
			swap((a+i), (a+j)); 
			permute(a, i+1, r); 
		 	swap((a+i), (a+j));
		}	 
	} 
} 
int main() 
{ 
	char str[] = "123"; 
	int n = strlen(str); 
	permute(str, 0, n-1); 
	return 0; 
} 

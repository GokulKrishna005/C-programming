// C program to print Identity Matrix
#include<stdio.h>

int Identity(int num)
{
	int row, col;
	
	for (row = 0; row < num; row++)
	{
		for (col = 0; col < num; col++)
		{
			// Checking if row is equal to column 
			if (row == col)
				printf("%d ", 1);
			else
				printf("%d ", 0);
		} 
		printf("\n");
	}
	return 0;
}

// Driver Code
int main()
{
	int size = 5;
	identity(size);
	return 0;
}


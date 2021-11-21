// MatrixSum.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <stdio.h>

int main()
{
	int matrix[100][100]; 
	int columns, rows, i, j;
	int sum = 0;

	printf("Enter the number of rows then columns for the matrix \n");

	scanf_s("%d", &rows); 

	scanf_s("%d", &columns);

	printf("Enter you matrix: \n"); 
	for (i = 0; i < rows; i++) 
	{
		for (j = 0; j < columns; j ++)
		{
			scanf_s("%d", &matrix[i][j]);
		}
	}

	printf("Here is your matrix \n");
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < columns; j++)
		{
			printf("%d ", matrix[i][j]);
		}
		printf("\n");
	}

	

	//count the elemens for the array 
	for (i = 0; i < rows; i++) {
		for (j = 0; j < columns; j++) {
			sum += matrix[i][j];
		}
	}

	printf("The sum of you matrix = %d \n", sum);
	return 0;
}

//Enter the number of rows then columns for the matrix
//3
//3
//Enter you matrix :
//1
//3
//2
//1
//2
//3
//1
//2
//3
//Here is your matrix
//1 3 2
//1 2 3
//1 2 3
//The sum of you matrix = 18

/*Enter the number of rows then columns for the matrix
2
2
Enter you matrix:
2
2
-2
2
Here is your matrix
2 2
-2 2
The sum of you matrix = 4*/
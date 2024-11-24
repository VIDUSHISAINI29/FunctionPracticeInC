
#include<stdio.h>


void printArray(int arr[][4],int rows)
	{
		int i, j;
		for( i = 0; i < rows; i++)
		{
			for(j = 0; j < 4; j++)
			{
				printf(" array %d_%d : %d \n",i+1 , j+1, arr[i][j]);
			}
		}
	}

int main()
	{
		int arr[][4] = { {2, 3, 2, 3},
						  {4, 5, 4, 5},
						  {6, 7, 6, 7},
						  {8, 9 ,8 ,9},
						  {0, 1, 0, 1}
						};
			 clrscr();
			printArray(arr, 5);
			getch();
		 return 0;

	}

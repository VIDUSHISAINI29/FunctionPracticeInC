#include<stdio.h>
#include<conio.h>

void bubbleSort(int arr[7], int n);
int main()
	{   int i;
		int arr[] = {10, 4, 9, 34, 21, 67, 94,};
		int n = sizeof(arr) / sizeof(arr[0]);
		bubbleSort(arr, n);
		printf("Sorted Array : \t");
		for(i = 0; i < n - 1; i++)
		{
			printf(" %d \n", arr[i]);
		}
		return 0;
		getch();
	}

void bubbleSort(int arr[7],int n)
	{
		int i, j, temp;
		for(i = 0; i < n - 1; i++)
		{
			for(j = 0; j < n - 1; j++)
			{
				if(arr[j] > arr[j + 1])
				{
					temp = arr[j];
					arr[j] = arr[j+1];
					arr[j+1] = temp;
				}
			}
		}
		getch();
	}
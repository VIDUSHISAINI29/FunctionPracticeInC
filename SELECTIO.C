#include<stdio.h>
#include<conio.h>
void selectionSort(int arr[7], int n);
int main()
	{ int i, n;
	  int array [7] = {32,43,89,57,3,17,29};
	  n = sizeof(array) / sizeof(array[0]);
	  selectionSort(array, n);
	  printf("Sorted Array :");
		for(i = 0; i < n ; i++)
		{
			printf("%d\n", array[i]);
		}
		return 0;
	}

void selectionSort(int arr[7], int n)
	{
		int i, j, temp, minIndex;
		for(i = 0; i < n - 1 ; i++)
		{
			minIndex = i;
			for(j = i + 1; j < n ; j++)
			{
				if(arr[j] < arr[minIndex])
				{
					minIndex = j;
				}
				if(minIndex != i)
				{
					temp = arr[minIndex];
					arr[minIndex] = arr[i];
					arr[i] = temp;
				}
			}

		}
		getch();
	}

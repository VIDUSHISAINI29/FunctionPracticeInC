#include<stdio.h>
#include<conio.h>
int findPrime(int x);
int y = 0;
int primeFactors[];
void main()
	{
		int number;
		clrscr();
		printf("Enter number to get it's prime factors :");
		scanf("%d", &number);
		findPrime(number);
		getch();
	}

int findPrime(int x)
	{
		int i,j;
		for(i = 0; i < x ; i++)
		{
			if(x % i == 0)
			{


				primeFactors[y] = i;
				y++;
			}
			else
			{
			   printf("Not a prime number");
			}
			for(j = 0; j < y; j++)
				printf("prime factors are : ", primeFactors[j]);
		}
	  return 0;
	}
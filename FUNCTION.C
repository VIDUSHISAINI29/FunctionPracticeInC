#include<stdio.h>
#include<conio.h>
int getFact(int x);
void main()
	{
		int value, a ;
		clrscr();
		printf("Enter a number of which you want factorial = ");
		scanf("%d", &a);
		value = getFact(a);
		printf("Factorial of your number %d is %d", a, value);
		getch();
	}
int getFact(int x)
	{
		int i, factorial = 1;

		if(x == 0 || x == 1)
		{
			return 1;
		}
		else
		{
			for(i = x; i >= 1; i--)
			{
				factorial = factorial * i ;
			}
			return (factorial);
		}
	}
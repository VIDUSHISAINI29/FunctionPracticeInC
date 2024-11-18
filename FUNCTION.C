#include<stdio.h>
#include<conio.h>
int getFact(int x);
int getPower(int y, int z);
void main()
	{
		int factValue, factInput, powerInputA, powerInputB, powerValue  ;
		clrscr();
		printf("Enter a number of which you want factorial = ");
		scanf("%d", &factInput);
		factValue = getFact(factInput);
		printf("Factorial of your number %d is %d\n", factInput, factValue);
		printf("\n");
		printf("Enter two numbers a and b so that to calculate a raised to the power b \n");
		scanf(" %d %d", &powerInputA, &powerInputB);
		powerValue = getPower(powerInputA, powerInputB);
		printf("Output of power calculation is %d", powerValue);
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

int getPower(int y, int z)
	{
		int i, powered= 1;
		for(i = 0; i < z; i++)
		{
			powered = powered * y;
		}
		return (powered);
	}
#include<stdio.h>
#include<conio.h>
int checkLeap(int x);
void main()
	{
	   int year;
	   clrscr();
	   printf("Enter year to check if this is leap year or not :");
	   scanf("%d", &year);
	   checkLeap(year);
	   getch();
	}

int checkLeap(int x)
	{
		if(x % 4 == 0)
			printf("%d is a leap year.", x);
		else
			printf("%d is not a leap year.", x);

			return 0;
	}
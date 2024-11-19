#include<stdio.h>
#include<conio.h>
int romanValue(int x, int y, char r);
void main()
	{
		int year;
		clrscr();
		printf("Enter year : ");
		scanf("%d", &year);
		year = romanValue(1000, year, 'm');
		year = romanValue(500, year, 'd');
		year = romanValue(100, year, 'c');
		year = romanValue(50, year, 'l');
		year = romanValue(10, year, 'x');
		year = romanValue(5, year, 'v');
		romanValue(1, year, 'i');
		getch();
	}

int romanValue(int x, int y, char r)
	{
		int times, i;
		times = y / x;
		for(i = 1; i <= times; i++)
		{
			printf("%c", r);
		}
		return(y % x);
	}
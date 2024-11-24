#include<stdio.h>
#include<conio.h>
int main()
	{
		char choice;
		clrscr();
		start:{
		printf("You are in a dark room.\n");
		printf("Choose a direction to move (n, s, e, w) \t");
		scanf("%c", &choice);
		}

		if(choice == 'n') goto north;
		if(choice == 's') goto south;
		if(choice == 'e') goto east;
		if(choice == 'w') goto west;

		printf("Invalid direction! Try again !!");
		if(choice == 'y')
		goto start;

		north :
		{
			printf("You have reached in a forest full of sweet animals.\n");
			goto end;
		}
		south:
		{
			printf("You fell into a pit ! .\n");
			goto end;
		}
		east:
		{
			printf("You are encounter a monster !\n");
			goto end;
		}
		west:
		{
			printf("You find a treasure chest and candy garden ... Enjoy!! \n");
			goto end;
		}
		end:
		{
			printf("Game has ended. Well played.\n");
			printf("Want to play again (y/n) :\n ");
			scanf("%c", &choice);
		}
		if(choice == 'y')
		goto start;

		printf("Goodbye!!");

		getch();
	}
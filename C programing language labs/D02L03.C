#include <stdio.h>
#include <conio.h>

void main(void){

	int x = 30;
	int y = 9 ;
	int choice;

	clrscr();

	gotoxy(x,y);

	printf("(1) New");

	y += 2;
	gotoxy(x,y);

	printf ("(2) Display");

	y += 2;
	gotoxy(x,y);

	printf ("(3) Exit");

	y += 2;
	gotoxy(x,y);

	printf("Enter menu no. ");


	scanf("%d",&choice);

	y += 2;
	gotoxy(x,y);

	switch(choice){
		case 1:

			printf("New");

			break;

		case 2:
			printf("Display");

			break;
		case 3:
			printf("Exit");
			break;

		default:
			 printf("Invalid Choice ^_^");

	}


	getch();

}
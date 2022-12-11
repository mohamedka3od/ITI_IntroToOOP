#include <stdio.h>
#include <conio.h>

void main(void){
	int x    = 12;
	int y    = 1 ;
	int index= 0 ;
	int index2   ;

	clrscr();

	for (index =10; index >=1; index--){

		gotoxy(x,y);
		printf(" %d ",index);

		y += 2;
		x++;

		gotoxy(x,y);
		printf("*");

		y=1;
		x+=6;
	}

	x= 1;
	y= 6;

	for (index =10; index >=1; index--){

		gotoxy(x,y);
		printf(" %d ", index);

		x+=5;

		gotoxy(x,y);
		printf("*");

		for(index2 =10 ;index2 >=1 ; index2--){

			x +=7;

			gotoxy(x,y);
			printf("%d", index2*index );
		}


		x=1;
		y+=2;

	}





	getch();
}
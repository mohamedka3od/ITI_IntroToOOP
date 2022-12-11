#include <stdio.h>
#include <conio.h>

int index;

int pow (int x, int y);
int powFor(int x, int y);

int main (void){

	int x = 2;
	int y = 3;

	clrscr();

	printf("%d power %d using resurcion : ",x,y);
	printf("%d",pow(x,y));

	printf("\n");

	printf("%d power %d using for loop  : ",x,y);
	printf("%d",powFor(x,y));

	getch();


	return 0;

}


int pow (int x, int y){



    if (y == 0)
		return  1;


	return x*pow(x,y-1);

}

int powFor (int x, int y){

	int xpy = 1;



	for( index =0; index < y ;index++){

		xpy *= x;

	}

	return  xpy;
}
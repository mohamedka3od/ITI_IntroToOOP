#include <stdio.h>
#include <conio.h>

void swap (int *x,int *y);

int main(void){
	int x = 5;
	int y = 7;

	clrscr();

	printf("before swap \n");
	printf("x is %d && y is %d \n",x,y);

	swap(&x,&y);

	printf("after swap \n");
	printf("x is %d && y is %d \n",x,y);



	getch();
	return 0;

}


void swap(int *x,int *y){

	int temp;
	temp = *x ;
	*x = *y;
	*y = temp;




}
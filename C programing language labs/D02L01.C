#include <stdio.h>
#include <conio.h>

void main(void){
	int N          = 21;
	int row        = 0  ;
	int col        = N/2;
	int arr [100][100]      ;
	int currentNum = 1  ;
	int index      = 0  ;
	int index2     = 0  ;
	int x =1, y =1;
	int xp = 79/(N-1);
	int yp = 24/(N-1);

	clrscr();

	do{

	   arr[row][col] = currentNum;

	   if( currentNum % N != 0){

			row =(row) > 0 ? (row -1) : (N-1)  ;
			col =(col) > 0 ? (col -1) : (N-1)  ;

	   }
	   else{
			row =(row) < (N-1) ? ( row + 1) : 0 ;


	   }



	   index++;
	   currentNum++;

	}while( index < N*N);


	for ( index =0  ; index  < N ; index++){

		for ( index2 =0 ; index2 < N ; index2++){
			gotoxy(x,y);
			printf("%d" , arr[index][index2]);
			x += xp;

		}
		//printf("\n");
		y +=yp;
		x=1;


	}


	getch();

}




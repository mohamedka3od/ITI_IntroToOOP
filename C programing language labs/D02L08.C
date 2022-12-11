#include <stdio.h>
#include <conio.h>

void main(void){
	int    x   = 25   ;
	int    y   = 5    ;
	int    input      ;
	int    index      ;
	int    index2     ;
	int    arr[3][4]  ;
	int    sum[3]= {0};
	float  avg[4]= {0};

	clrscr();

	for(index=0; index < 3; index++){

		for(index2=0; index2 < 4; index2++){

			gotoxy(x,y);

			scanf("%d",&input);
			arr[index][index2] = input;

			sum[index]  +=input;
			avg[index2] +=input;

			x +=5;

		}

		x=25;
		y+=4;

	}
	x = 50;
	y = 1;

	gotoxy(x,y);
	printf("sum");

	y =5;

	for (index =0; index <3 ; index++){

		gotoxy(x,y);
		y+=4;

		printf("%d",sum[index]);


	}

	x= 18;
	y= 18;

	gotoxy(x,y);

	printf("avg");

	x= 25;

	for (index =0; index <4 ; index++){
		avg[index] = avg[index]/3;

		gotoxy(x,y);
		x+=5;
		printf("%0.2f",avg[index]);

	}






	getch();


}
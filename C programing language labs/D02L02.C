#include <stdio.h>
#include <conio.h>

void main(void){

	int enterdNum;
	int sum = 0  ;

	clrscr();

	do{
		printf("enter the number: ");
		scanf("%d",&enterdNum);

		sum += enterdNum;

	}while(sum <= 100);

	printf("\n");

	printf("the summtion of your numbers exceeds 100 ^_^\n");
	printf("the total = %d",sum);

	getch();

}

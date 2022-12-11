#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main(void){


	int  size = 0;
	int* arr     ;
	int  index   ;

	clrscr();

	printf("Enter array size : ");
	scanf("%d",&size);

	printf("\n");

	arr = (int*) malloc(size * sizeof(int));

	if (arr == NULL){

		printf("Memory not allocated. \n");

		exit(0);

	}

	for(index = 0; index < size ; index++){

		printf("Enter Value no. %d = ",index+1);
		scanf("%d",&arr[index]);

		printf("\n");


	}

	printf("\n");


	printf("The array values are:\n");

	for(index = 0; index < size ; index++){

		printf("array[%d] = %d \n",index,arr[index]);
	}





	getch();



}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


void stcpy(char *src , char *des);

int main(void){

	int size;
	char *uInput;
	char *target;

	clrscr();
	printf("Enter size of string : ");
	scanf("%d",&size);

	if(size <1){

		printf("you did inter nothing.");

		getch();
		exit(0);


	}


	uInput = (char *) malloc((size+1) * sizeof(char));

	printf("Now Enter the String please : ");
	scanf ("%s",uInput);
	uInput[size]='\0';

	target = (char *) malloc( (size+1) * sizeof(char));


	stcpy(uInput,target);


	printf("\n^_^ FINALLY ^_^\n");
	printf("user input is  : %s",uInput);
	printf("\ntarget is    : %s",target);

	free(uInput);
	getch();

	return 0;
}
void stcpy(char *src , char *des){

	int index =0;
	int size  =0;

	while(src[size] !='\0'){

		size++;

	}

	for(index = 0; index <= size ;index++){

		des[index] = src[index];

	}

}
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>





int main(void){

	char **arr;
	int strSize , arrSize,index;

	clrscr();



	printf("Enter Array Size : ");
	scanf("%d",&arrSize);

	printf("Enter String max Size : ");
	scanf("%d",&strSize);


	arr = (char **) malloc(arrSize * sizeof(char *));//pointer to N pointers of char

	if (arr == NULL){

		printf("codn't allocate");
		getch();
		exit(0);
	}

	for(index = 0;index < arrSize ; index++){


		arr[index] = (char *) malloc((strSize+1) * sizeof(char));  // pointer to M chars

	}

	for(index = 0; index < arrSize ; index++){

		printf("Enter String no %d : ",index+1);
		scanf("%s",arr[index]);
		arr[index][strSize]='\0';

	}

	for(index = 0; index < arrSize ; index++){

		printf("String no %d is : %s\n",index+1,arr[index]);


	}










	getch();
	return 0;
}
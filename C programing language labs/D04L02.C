#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void getArr(int size,int *arr);
void printArr(int size , int *arr);

int main(void){

	int* arr;
	int size;

	clrscr();

	printf("Enter array size : ");
	scanf("%d",&size);

	arr =(int *) malloc (size * sizeof(int));

	getArr(size,arr);

	printArr(size,arr);

	free(arr);
	getch();

	return 0;
}

void getArr(int size , int *arr){

	int index;


	for ( index = 0 ; index < size ; index++){

	   printf("Enter element no (%d): ",index+1);
	   scanf("%d",&arr[index]);

	}


}

void printArr(int size , int *arr){

	int index;

	printf("array is [");

	for(index = 0 ; index < size ; index++){

		printf(" %d",arr[index]);
		index < size-1 ? printf(" ,") : printf(" ");

	}
	printf("]");

}
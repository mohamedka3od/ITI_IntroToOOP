#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct Employee{
	int id;
	int nSalary;
	char name[50];

}emp;


int main(void){

	int index;
	int size;
	emp *eL;

	clrscr();

	printf("Enter number of Employees : ");
	scanf("%d",&size);

	eL = (emp *) malloc(size * sizeof(emp));

	for(index =0 ; index < size ; index++){

		printf("\nEnter emp no(%d) Name: ",index+1);
		scanf("%s",&(eL+index)->name);

		printf("\nEnter emp no(%d) ID: ",index+1);
		scanf("%d",&(&eL[index])->id);

		printf("\nEnter emp no(%d) Net Salary: ",index+1);
		scanf("%d",&(eL+index)->nSalary);
	}


	for(index = 0 ; index < size ; index++){


		printf("\nemp no(%d) Name: ",index+1);
		printf("%s",eL[index].name);

		printf("\nemp no(%d) ID: ",index+1);
		printf("%d",eL[index].id);

		printf("\nemp no(%d) Net Salary: ",index+1);
		printf("%d",eL[index].nSalary);


	}



	free(eL);
	getch();

	return 0;
}


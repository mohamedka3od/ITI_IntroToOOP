#include <stdio.h>
#include <conio.h>

typedef struct employee{
	int   code    ;
	char  name[50];
	float netSal  ;


}emp;

int main(void){

	emp e1;


	clrscr();

	printf("Enter Your Code       : ");
	scanf("%d",&e1.code);

	printf("Enter Your Name       : ");
	scanf("%s",e1.name);

	printf("Enter Your Net Salary : ");
	scanf("%f",&e1.netSal);


	printf("\n===================================\n\n");

	printf("Welcome %s \n",e1.name);
	printf("Your Code is   : %d \n",e1.code);
	printf("Your netSal is : %0.2f $ \n",e1.netSal);


	getch() ;
	return 0;
}
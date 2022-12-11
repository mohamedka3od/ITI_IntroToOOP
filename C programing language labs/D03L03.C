#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct employee{
	int   code    ;
	char  name[50];
	float netSal  ;


}emp;

emp setEmpData(int code , char name[], float netSal);
void getEmpData(emp e1);

int main(void){
	int   eCode    ;
	char  eName[50];
	float eNetSal  ;

	emp e1;


	clrscr();

	printf("Enter Your Code : ");
	scanf("%d",&eCode);

	printf("Enter Your Name : ");
	scanf("%s",eName);

	printf("Enter Your Net Salary : ");
	scanf("%f",&eNetSal);


	printf("\n===================================\n\n");

	e1 = setEmpData(eCode,eName,eNetSal);
	getEmpData(e1);

	getch() ;
	return 0;

}



emp setEmpData(int code , char name[], float netSal){

	emp e1;

	e1.code = code      ;
	strcpy(e1.name,name);
	e1.netSal = netSal  ;

	return e1;
}

void getEmpData(emp e1){


	printf("Welcome %s \n",e1.name);
	printf("Your Code is   : %d \n",e1.code);
	printf("Your netSal is : %0.2f $ \n",e1.netSal);



}
#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct employee{

	int code;
	char  name[50];
	float netSal;


}emp;

emp setEmpData(int code , char name[], float netSal);
void getEmpData(emp e1);

int main(void){
	int index;
	int eCode   ;
	char eName[50];
	float eNetSal;

	emp e1[5];


	clrscr();

	for(index =0; index < 5; index++){

		printf("Enter Employee no[%d] Code      : ",index+1);
		scanf("%d",&eCode);

		printf("Enter Employee no[%d] Name      : ",index+1);
		scanf("%s",eName);

		printf("Enter Employee no[%d] Net Salary : ",index+1);
		scanf("%f",&eNetSal);

		e1[index] = setEmpData(eCode,eName,eNetSal);
		printf("===================================\n");

	}





	for(index = 0; index < 5; index++){

		printf("====== Employee no [%d] ===========\n",index+1);
		getEmpData(e1[index]);

	}

	getch() ;
	return 0;

}



emp setEmpData(int code , char name[], float netSal){

	emp e1;

	e1.code = code;
	strcpy(e1.name,name);
	e1.netSal = netSal;

	return e1;
}

void getEmpData(emp e1){


	printf("Name      : %s \n",e1.name);
	printf("Code      : %d \n",e1.code);
	printf("netSal is : %0.2f$ \n",e1.netSal);



}
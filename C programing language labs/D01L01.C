#include <stdio.h>
#include <conio.h>
void main(void){

int    n      =15;
char   c      ='M';
float  f      =5.5;
char   name[] = "Mohamed";
double db     = 2.5;

clrscr();


printf("%-7s   : %-6i  \n ","Int"   ,n   );
printf("%-7s   : %-6c  \n ","Char"  ,c   );
printf("%-7s   : %-6f  \n ","Float" ,f   );
printf("%-7s   : %-6lf \n ","Double",db  );
printf("%-7s   : %-6s  \n ","String",name);
getch();

}
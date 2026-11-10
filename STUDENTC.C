#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(int argc,char*argv[])
{
int Tam,Eng,Mat,C,Jap,total;
float average;
char name[30];
if(argc!=7)   {
printf("Invalid statement");
return 0;
}
strcpy(name,argv[1]);
Tam=atoi(argv[2]);
Eng=atoi(argv[3]);
Mat=atoi(argv[4]);
C=atoi(argv[5]);
Jap=atoi(argv[6]);
total=Tam+Eng+Mat+C+Jap;
average=total/5;
printf("\n-----STUDENT MARKSHEET-----\n");
printf("Tamil:%d\n",Tam);
printf("English:%d\n",Eng);
printf("Maths:%d\n",Mat);
printf("C Program:%d\n",C);
printf("Japanese:%d\n",Jap);
printf("Total:%d\n",total);
printf("Average:%2f\n",average);
if(Tam<=35||Eng<=35||Mat<=35||C<=35||Jap<=35) {
printf("FAIL"); }
else {
printf("PASS"); }
return 0;
}


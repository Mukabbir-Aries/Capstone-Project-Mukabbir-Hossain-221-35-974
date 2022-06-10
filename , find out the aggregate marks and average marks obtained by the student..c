#include<stdio.h>
void main(){
int Ban,Eng,Ict,Math,Biology,Avg;
printf("Take the numbers of student : \n");
scanf("%d %d %d %d %d",&Ban,&Eng,&Ict,&Math,&Biology);
printf("The obtained number in Ban : %d\n",Ban);
printf("The obtained number in Eng :%d\n",Eng);
printf("The obtained number in Ict :%d\n",Ict);
printf("The obtained number in Math :%d\n",Math);
printf("The obtained number in Biology :%d\n",Biology);
Avg=(Ban+Eng+Ict+Math+Biology)/5;
printf("The Average Number of the student is : %d\n");
}

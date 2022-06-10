#include <stdio.h>
void main(){
printf("Enter Ages: \n");
int a,b,c;
scanf("%d %d %d",&a,&b,&c);

if (a<=b && a<=c){
printf("Arif,s age is : %d .So he is youngest among them \n");}
if (b<=a && b<=c)
{
    printf("Fahamid's age is : %d .So he is youngest among them \n",b);
}
if(c<=a && c<=b){
 printf("Joy's age is : %d .So he is youngest among them \n");
}
}

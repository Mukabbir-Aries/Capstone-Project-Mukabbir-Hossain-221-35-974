#include <stdio.h>
void main(){
printf("Enter Numbers: \n");
int a,b,c;
scanf("%d %d %d",&a,&b,&c);
if (a>b && a>c){
printf("a is the biggest number\n");}
else if (b>c)
{
    printf("b is the biggest number\n");
}
else{
    printf("c is the biggest number\n");
}
}

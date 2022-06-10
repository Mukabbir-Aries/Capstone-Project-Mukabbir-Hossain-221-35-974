#include<stdio.h>
void main(){
printf("Enter a year: ");
int a;
scanf("%d",&a);
if(a%400==0){
    printf("%d is a leap year");
}else if(a%100==0)
       {printf("%d is not a leap year");
   }else if(a%4==0)
    {printf("%d is a leap year");
    }else
   {printf("%d is not a leap year");}
}



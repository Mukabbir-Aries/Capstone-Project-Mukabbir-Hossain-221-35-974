#include<stdio.h>
void main(){
printf("Enter distance value\n");
int a,cm,inc,feet;
scanf("%d",&a);
cm=a*100;
printf("Distance in centimeter: %d\n",cm);
inc=a*39.37;
printf("Distance in inch: %d\n",inc);
feet=a*3.21;
printf("Distance in feet: %d\n",feet);
}

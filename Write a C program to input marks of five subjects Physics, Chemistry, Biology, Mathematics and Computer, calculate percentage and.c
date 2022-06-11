#include <stdio.h>
void main(){
printf("Enter Numbers : ");
int a,b,c,d,e,grade,mark;
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
mark =((a+b+c+d+e)*100)/500;
printf("Percentage of the mark is = %d\n", mark);
if (mark >= 90)
    {
        printf("Grade is : A\n");
    }
else if(mark >= 80)
    {
        printf ("Grade is : B\n");
    }
else if (mark >= 70)
 {
    printf ("Grade is : C\n");
 }
else if (mark >= 60)
 {
     printf("Grade is : D\n");
 }
else if (mark >= 40)
 {
     printf("Grade is : E\n");
 }
else
 {
     printf(" Grade is : F\n");

}
}

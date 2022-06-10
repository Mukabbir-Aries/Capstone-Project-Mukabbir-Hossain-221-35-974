#include <stdio.h>
int main()
{
    float a,b,c,d;
    printf("Input Basic Salary=");
    scanf("%f",&a);
    b=(a*40)/100;
    d=(a*20)/100;
    c=b+a+d;
    printf("Gross salary is =%f",c);
    return 0;
}

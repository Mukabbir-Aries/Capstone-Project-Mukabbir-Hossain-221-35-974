#include<stdio.h>
int main()
{
	int num1,num2,add,sub,multi,divide;
	printf("Enter two numbers:\n");
	scanf("%d %d",&num1,&num2);
	add=num1+num2;
	printf("\nAddition is : %d",add);
    sub=num1-num2;
    printf("\nSubtract is : %d",sub);
	multi=num1*num2;
	printf("\nMultiplication is : %d",multi);
	divide=num1/num2;
	printf("\nDividation is : %d",divide);
	return  0;
}

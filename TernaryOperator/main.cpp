// WAP to accept any two numbers, if the first number is greatherthan second number print the difference, otherwise print the sum using ternary operator.

#include <stdio.h>

int main()
{
	int num1,num2,result;
    
    printf("Enter the two numbers: ");
    scanf("%d %d",&num1,&num2);
    
    result = (num1>num2)?(num1-num2):(num1+num2); //ternary operator
    
    printf("Result: %d\n",result);
    
	return 0;
}

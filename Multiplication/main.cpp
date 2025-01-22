// WAP to multiply two numbers without using multiplication operator(*)

#include <stdio.h>

int main()
{
	int num1, num2, product = 0;
    
    printf("Enter two numbers: ");
    scanf("%d %d",&num1,&num2);
    
    for(;num2!=0;num2--)
    {
        product+=num1;
    }
    
    printf("Product of two numbers: %d\n",product);
    
	return 0;
}

// WAP to accept any number and print the value of remainder after dividing it by 3

#include <stdio.h>

int main()
{
	int num;
    
    printf("Enter a number: ");
    scanf("%d",&num);
    
    num%=3;
    
    printf("Remainder of number after dividing with 3: %d\n",num);
    
	return 0;
}

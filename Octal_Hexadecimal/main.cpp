// WAP to accept a number in decimal form and print the number in octal and hexadecimal form

#include <stdio.h>

int main()
{
	int num;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    printf("Octal form of a number: %o\n",num);
    printf("Hexa decimal form of a number: %x\n",num);
    
	return 0;
}

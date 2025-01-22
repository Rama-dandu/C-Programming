// WAP to print the number of digits in a given number

#include <stdio.h>

int main()
{
	unsigned 
    int num, counter = 0;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    do
    {
        num/=10;
        counter++;
        
    }while(num>0);
    
    printf("Number of digits: %d\n",counter);
    
	return 0;
}

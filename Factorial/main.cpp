// WAP to find the factorial of given number

#include <stdio.h>

int main()
{
	int num, product=1;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    if(num<0)
        printf("We can't find factorial for negative numbers\n");
    else
    {
        while(num>1)
        {
            product*=num;
            num--;
            
        }
        
        printf("Factorial of given number: %d\n",product);
    }
    
	return 0;
}

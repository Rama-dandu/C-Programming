// WAP to find the sum of digits of given number

#include <stdio.h>

int main()
{
	int num,sum=0,remaind;
    
    printf("Enter the number: ");
    scanf("%d",&num);
    
    while(num>0){
        remaind = num%10;
        sum+=remaind;
        
        num/=10; //1 divide by 10 means 1 is the remainder and 0 is the quotient
    }
    
    printf("Sum of digits: %d\n",sum);
	return 0;
}

// WAP to find the sum of the series upto n terms - 1+2+4+7+11+16.......

#include <stdio.h>

int main()
{
	int num, sum=0, term = 1;
    
    printf("Enter the value of n: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++)
    {
        sum+=term;
        term+=i;
    }
    
    printf("Sum of series: %d\n",sum);
	return 0;
}

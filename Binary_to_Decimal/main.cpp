// WAP to convert a binary number to a decimal number

#include <stdio.h>
#include <math.h>

int main()
{
	int binary_num, decimal_num = 0;
    int i=0, remind;
    
    printf("Enter a binary number: ");
    scanf("%d",&binary_num);
    
    while(binary_num>0)
    {
        remind = binary_num%10;
        decimal_num+=remind * pow(2,i);
        binary_num/=10;
        i++;
    }
    
    printf("The decimal number: %d\n",decimal_num);

	return 0;
}

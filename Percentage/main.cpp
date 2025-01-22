// WAP that accepts marks in 5 subjects and calculates the total percentage marks

#include <stdio.h>

int main()
{
	int s1,s2,s3,s4,s5;
    float sum, percent;
    
    printf("Enter the subject marks: ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    
    sum = s1+s2+s3+s4+s5;
    
    percent = (sum/500.0) * 100;
    
    printf("Marks percentage: %f\n",percent);
    
	return 0;
}

// WAP to perform the fibonacci series of given number of terms
// 1,1,2,3,5,8,13,21,34,55,89...

#include <stdio.h>

int main()
{
	int n, present=1,previous=1;
    
    printf("Enter the number of terms: ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++)
    {
        int x = previous + present;
        
        if(i==0)
        {
            printf("%d ",previous);
            printf("%d ",present);
            
        }
        printf("%d ",x);
        previous = present;
        present = x;
    }
	return 0;
}

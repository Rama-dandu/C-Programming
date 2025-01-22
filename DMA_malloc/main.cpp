#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *ptr,n;
    
    printf("Enter n value: ");
    scanf("%d",&n);
    
    ptr = (int*)malloc(n*sizeof(int));
    
    if(ptr == NULL){
        printf("No memory is available in heap\n");
        exit(1);
    }
    
    for(int i=0;i<n;i++){
        printf("Enter an integer: ");
        scanf("%d",ptr+i);
    }
    
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
    }
	return 0;
}

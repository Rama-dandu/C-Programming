#include <stdio.h>


// call by value
void fun1(int p,int q){
    
    int temp;

    temp = p;
    p = q;
    q = temp;
    
}

// call by reference
void fun2(int *p,int *q){
    
    int temp;

    temp = *p;
    *p = *q;
    *q = temp;
    
}

int main(){
    
    int a=10,b=20;
    
    printf("call by value: \n");
    //before swapping a and b
    printf("a: %d b: %d\n",a,b);
    
    fun1(a,b); // call by value
    
    //after swapping a and b
    printf("a: %d b: %d\n",a,b);
    
    
    printf("call by reference:\n");
    //before swapping a and b
    printf("a: %d b: %d\n",a,b);
    
    fun2(&a,&b); // call by refrenece
    
    //after swapping a and b
    printf("a: %d b: %d\n",a,b);
    
    
    
    return 0;
}
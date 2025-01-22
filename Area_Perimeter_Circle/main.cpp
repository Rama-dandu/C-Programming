#include <stdio.h>
#include <math.h>

#define PI 3.14

int main()
{
	float radius, area, perimeter;
    
    printf("Enter the radius of circle: ");
    scanf("%f",&radius);
    
    area = PI * pow(radius,2);
    perimeter = 2 * PI * radius;
    
    printf("Area of the Circle: %f\n",area);
    printf("Perimeter of the Circle: %f\n",perimeter);
    
	return 0;
}

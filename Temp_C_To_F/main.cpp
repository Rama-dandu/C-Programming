// WAP that enters temperature in Celsius and converts that into Fahrenheit.

#include <stdio.h>

int main()
{
	float temp_C,temp_F;
    
    printf("Enter the temperature in Celcius: ");
    scanf("%f",&temp_C);
    
    temp_F = (temp_C * 1.8) + 32;
    
    printf("Temp in Farenheit: %.2f\n",temp_F);
    
	return 0;
}

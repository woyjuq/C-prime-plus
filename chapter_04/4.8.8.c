
#include<stdio.h>

int main(void)
{
    const float gallon_to_liter = 3.785;     
    const float mile_to_kilometer = 1.609;   
    float traveled_miles;
    float traveled_kilometers;
    float gasoline_gallons;
    float gasoline_liters;

    printf("Enter the number of miles traveled: ");
    scanf("%f",&traveled_miles);
    printf("Enter the number of gallons of gasoline consumed: ");
    scanf("%f",&gasoline_gallons);
    printf("The miles-per-gallon Value: %.1f\n",traveled_miles/gasoline_gallons);

    traveled_kilometers = traveled_miles*mile_to_kilometer;      
    gasoline_liters = gasoline_gallons*gallon_to_liter;          

    printf("The liter-per-100-km value: %.1f\n",gasoline_liters/traveled_kilometers*100);

    return 0;
}

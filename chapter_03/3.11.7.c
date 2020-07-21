

#include<stdio.h>
#define CENTI_TO_INCH 2.54        

int main(void)
{
    float height_inch;
    float result;
    printf("Enter your height in inches: ");
    scanf("%f",&height_inch);
    printf("Your height in centimeters is %f",height_inch*CENTI_TO_INCH);

    return 0;
}

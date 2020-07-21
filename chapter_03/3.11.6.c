

#include<stdio.h>
#define MASS_OF_MOLECULES 3.0e-23      
#define MASS_OF_QUART 950.0             

int main(void)
{
    int quart;
    double result;
    printf("Enter the amount of water in quarts: ");
    scanf("%d",&quart);
    result = quart*(MASS_OF_QUART/MASS_OF_MOLECULES);
    printf("The number of water molecules in that amount is: %e",result);
    
    return 0;
}

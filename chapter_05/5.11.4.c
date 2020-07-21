

#include<stdio.h>
#define CENTI_TO_FEET 30        
#define CENTI_TO_INCH 2.54      

int main(void)
{
    float centi;  
    printf("Enter a height in centimeters: ");    
    scanf("%f",&centi); 
    while(centi>0) 
    {
        printf("%.1f cm = %.0f feet, %.1f inches\n",centi,centi/CENTI_TO_FEET,centi/CENTI_TO_INCH);
        printf("Enter a height in centimeters (<=0 to quit): ");
        scanf("%f",&centi);                                         
    }
    
    printf("bye");
    
    return 0;
}

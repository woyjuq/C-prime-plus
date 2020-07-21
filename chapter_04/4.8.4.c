

#include<stdio.h>
#define CENTI_TO_METER 100    
int main(void)
{
    char name[20];
    float height;
    printf("Enter your name: ");
    scanf("%s",name);
    printf("Enter your height in centimeters: ");
    scanf("%f",&height);
    printf("%s, your are %.3f meters tall.",name,height/CENTI_TO_METER);
    return 0;
}

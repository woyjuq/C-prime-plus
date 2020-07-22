
#include<stdio.h>
int main(void)
{
    double num1;
    double num2;
    int i,j;
    printf("Enter two floating-point number: \n");
    while(scanf("%lf %lf",&num1,&num2) == 2)             
    {
        printf("The value of their difference divided by their product is: %f\n",(num1 - num2)/(num1 * num2));
        printf("Enter two floating-point number: \n");
    }
    return 0;
}

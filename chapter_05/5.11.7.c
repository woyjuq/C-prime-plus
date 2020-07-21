

#include<stdio.h>
void cube(double num);   

int main(void)
{
    double num;
    printf("Enter a number: ");
    scanf("%lf",&num);
    cube(num);
    
    return 0;
}
void cube(double num) 
{
    printf("The value of the number cubed is: %.2f\n",num*num*num);
}

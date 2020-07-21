

#include<stdio.h>
#include<float.h>  

int main(void)
{
    double num1 = 1.0/3.0;
    float num2 = 1.0/3.0;
    printf("double: %.4f %.12f %.16f\n",num1,num1,num1);
    printf("float:  %.4f %.12f %.16f\n",num2,num2,num2);
    printf("DBL_DIG: %d\nFLT_DIG: %d",DBL_DIG,FLT_DIG);

    return 0;
}

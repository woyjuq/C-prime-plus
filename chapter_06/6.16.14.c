#include<stdio.h>
int main(void)
{
    int i,j;
    int count = 7;
    double sum = 0;
    double sum1;
    double array1[8];
    double array2[8];
    printf("Enter values for the eight-elements of the first array: ");
    for(i = 0; i <= count; i++)                             
    {
       scanf("%lf",&array1[i]);   
    }
    for(i = 1, array2[0] = array1[0]; i <= count; i++)      
    {
        array2[i] = array2[i-1] + array1[i];                
    }  
    for(i = 0; i <= count; i++)                             
    {
        printf("%-10f ",array1[i]);
    }
    printf("\n");
    for(j = 0; j <= count;j++)                              
    {
        printf("%-10f ",array2[j]);
    }
    printf("\n");
    return 0;
}

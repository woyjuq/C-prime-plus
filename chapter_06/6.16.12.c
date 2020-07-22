 #include<stdio.h>
 int main(void)
 {
    int num1;
    int num2;
    double k;
    double value1 = 0;
    double value2 = 0;
    int i,j;
    printf("Enter two number of terms: ");
    scanf("%d %d",&num1,&num2);
    for(i = 1; i <= num1; i++)          
    {
        value1 = value1 + 1.0/i;
    }
    for(j = 1,k = -1.0; j <= num2; j++)  
    {
        k *= -1.0;                       
        value2 = value2 + k/j;
    }
    printf("value = %f %f\n",value1,value2);
    return 0;
 }

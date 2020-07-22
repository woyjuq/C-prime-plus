#include<stdio.h>
#define invest 100
#define interest1 0.1
#define interest2 0.05

int main(void)
{
    int i = 0;
    int j;
    double value1;
    double value2 = 1.0;
    double trans;
    do
    {
        i++;
        value1 = invest + invest * interest1 * i;  

        for(j = 1, trans = 1; j <= i; j++)          
            trans *= (1 + interest2);
        value2 = invest * trans;
    } while (value1 >= value2);                    
    printf("It takes %d years for the value of Deirdre's investment to exceed the value of Daphne's\n",i);
    printf("Daphne's final value is %f, Deirdre's final value is %f\n",value1,value2);
    return 0;
}

#include<stdio.h>
#define Dunbar_number 150

int main(void)
{
    int num;
    int week;
    for(num = 5, week = 1; num <= Dunbar_number; week++)
    {
        num = (num - week) * 2;
        printf("The number of friends of %d week is %d\n",week,num);
    }
    
    return 0;
}



#include<stdio.h>
#define DAYS_PER_WEEK 7   
int main(void)
{
    int enter;
    printf("Enter the number of days, or enter a nonpositive value to terminate the loop\n");
    scanf("%d",&enter);
    while(enter > 0)
    {
        printf("%d days are %d weeks, %d days.\n",enter,enter/DAYS_PER_WEEK,enter%DAYS_PER_WEEK);
        printf("Enter the number of days, or enter a nonpositive value to terminate the loop\n");
        scanf("%d",&enter);
    }
    
    return 0;
}



#include<stdio.h>
#define DAYS_PER_YEAR 365   

int main(void)
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("Your age is %d, and it's %d days.\n",age,age*DAYS_PER_YEAR);

    return 0;
}

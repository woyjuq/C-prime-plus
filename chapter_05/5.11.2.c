

#include <stdio.h>

int main(void)
{
    int num_init = 0;        
    int num_enter;

    printf("Enter an integer number: ");
    scanf("%d",&num_enter);
    while (num_init < 11)    
    {
        printf("%d\n",num_enter+num_init);
        num_init++;          
    }
    return 0;
}

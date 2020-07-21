

#include<stdio.h>
int main()
{
    int first_num;
    int second_num;
    printf("This program computes modulus.\nEnter an integer to serve as the second operand: ");
    scanf("%d",&second_num);
    printf("Now enter the first operand: ");
    scanf("%d",&first_num);
    
    while(first_num > 0)
    {
        printf("%d %% %d is %d\n",first_num,second_num,first_num%second_num);
        printf("Now enter the first operand (<= 0 to quit): ");
        scanf("%d",&first_num);
    }
    printf("Done");

}

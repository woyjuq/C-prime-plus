

#include<stdio.h>
int main()
{
    int count = 0;
    int sum = 0;
    int end;
    printf("How far the calculation should proceed: ");
    scanf("%d",&end);
    while(count++<end)          
        sum = count*count;
    printf("sum = %d\n",sum);
    
    return 0;
}

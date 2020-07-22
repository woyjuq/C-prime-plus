#include<stdio.h>
#define elements 255

int main(void)
{
    int i,j;
    char ch[elements];
    printf("Enter a line of character: \n");
    for(i = 0; i <= 254, ch[i-1] != '\n'; i++)  
                                                
    {
        scanf("%c",&ch[i]);
    }
    i -= 2;                                      
    while(i >= 0)
        printf("%c",ch[i--]);

    return 0;
}

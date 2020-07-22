#include<stdio.h>      
int main(void)
{
    int ROWS;
    int space;
    int row;
    int i;
    char ch_f;
    char ch_b;
    char input;

    printf("Enter a uppercase letter: ");
    scanf("%c",&input);
    ROWS = input - 64;                                 
    for(row = 0; row < ROWS; row++)                   
    {
        for(space = 0; space < ROWS - row; space++)    
            printf(" ");
        for(ch_f = 'A', i = 0; i <= row; i++)          
            printf("%c",ch_f++);
        for(i = 0,ch_b = row + 64; i <= row -1; i++)   
            printf("%c",ch_b--);
        printf("\n");
    }
    return 0;
}

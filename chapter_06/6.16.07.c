#include<stdio.h>
#include<string.h>      

int main(void)
{
    char word[20];
    int index;
    int i;
    printf("Enter a single word: ");
    scanf("%s",word);
    index = strlen(word);
    for(i = 0; i <= index;index--)  
    {
        printf("%c",word[index]);
    }
    printf("\n");
    return 0;
}

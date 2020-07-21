

#include <stdio.h>

int main(void)
{
    int const MIN_TO_HOUR = 60;    
    int minutes_input;
    int hour;
    int minite;
    minutes_input;
    printf("Enter the time in minutes, "
           "or terminate the loop if a value for the time of 0 or less is entered : \n");
    scanf("%d",&minutes_input);
    while(minutes_input>0)   
    {
        hour = minutes_input/MIN_TO_HOUR;
        minite = minutes_input%MIN_TO_HOUR;
        printf("The minite you enter is %d hours and %d minites\n",hour,minite);
        scanf("%d",&minutes_input);
    }
    
    return 0;
}

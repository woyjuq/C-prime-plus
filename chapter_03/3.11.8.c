

#include<stdio.h>
#define CUP_TO_PINT 2
#define OUNCE_TO_CUP 8
#define TABLE_TO_OUNCE 2
#define TEA_TO_TABLE 3

int main(void)
{
    float volume;
    printf("Enter a volume in cups: ");
    scanf("%f",&volume);
    printf("The equivalent volumes in pints is %f\n",volume/CUP_TO_PINT);
    printf("The equivalent volumes in ounces is %f\n",volume*OUNCE_TO_CUP);
    printf("The equivalent volumes in tablespoons is %f\n",volume*OUNCE_TO_CUP*TABLE_TO_OUNCE);
    printf("The equivalent volumes in teaspoons is %f\n",volume*OUNCE_TO_CUP*TABLE_TO_OUNCE*TEA_TO_TABLE);
    return 0;
}

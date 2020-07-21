
#include<stdio.h>
void Temperatures(double Ftemp);        

int main(void)
{
    double Ftemp;
    printf("Enter a Fahrenheit temperature: ");
    while(scanf("%lf",&Ftemp))     
    {
        Temperatures(Ftemp);
        printf("Enter a Fahrenheit temperature (q or other nonnumeric value to quit): ");
    }
    return 0;
}
void Temperatures(double Ftemp)
{
    const double f_to_c1 = 32.0;
    const double f_to_c2 = 5.0 / 9.0;
    const double c_to_k = 273.16;
    printf("Fahrenheit temperature: %.2f\nCelsius temperature: %.2f\n"
    "Kelvin temperature: %.2f\n",Ftemp,(Ftemp-f_to_c1)*f_to_c2,(Ftemp-f_to_c1)*f_to_c2+c_to_k);
}

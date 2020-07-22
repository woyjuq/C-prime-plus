
 #include<stdio.h>
 int main(void)
 {
    int low;
    int low_s;
    int upper;
    int value;
    printf("Enter lower and upper integer limits: ");
    while(scanf("%d %d",&low,&upper) == 2 && low < upper)  
    {
    low_s = low;
    for(value = 0; low <= upper; low++)                   
    {
        value += low * low;
    }
    printf("The sums of the squares from %d to %d is %d\n",low_s * low_s, upper * upper, value);
    printf("Enter next set of limites: ");
    }
    printf("Done\n");
    return 0;
 }

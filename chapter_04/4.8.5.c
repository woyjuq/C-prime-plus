

#include<stdio.h>
#define BIT_TO_BYTE 8     

int main(void)
{
    float m_speed;
    float b_speed;
    float file_size;
    printf("Enter the download speed in megabits per second(Mbs): ");
    scanf("%f",&b_speed);
    m_speed = b_speed/BIT_TO_BYTE;
    printf("Enter the size of a file in megabytes (MB):");
    scanf("%f",&file_size);
    printf("Download speed(MBs): %.2f\n",m_speed);
    printf("File size(MB): %.2f\n",file_size);
    printf("Download time(s): %.2f\n",file_size/m_speed);
    
    return 0;
}

#include<stdio.h>
int main(void)
{
    float download_speed,file_size;

    printf("Enter download speed (megabits per second) and file size (megabytes):\n");
    scanf("%f%f",&download_speed,&file_size);
    printf("At %.2f megabits per second, a file of %.2f megabytes\n",download_speed,file_size);
    printf("downloads in %.2f seconds.\n",file_size*8.0/download_speed);

    return 0;
}
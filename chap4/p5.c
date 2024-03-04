#include <stdio.h>
int main(void)
{
    float speed_mbs, size_mb, download_sec;
    ;
    printf("Enter your download speed(Mb/s) and file size(MB): \n");
    scanf("%f %f", &speed_mbs, &size_mb);
    download_sec = size_mb * 8 / speed_mbs;
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds",
           speed_mbs, size_mb, download_sec);
    return 0;
}
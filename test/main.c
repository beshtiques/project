#include <stdio.h>


int main()
{
    int x,y;
printf("enter 24-hour time : ");
scanf("%d:%d",&x,&y);
if (x>=12)
{
    printf("Equvilant 12- hour time :  %d : %.2d\tPM ",x==12?12:(x-12),y);
}
else
{
    printf("Equvilant 12- hour time :  %d : %.2d\tAM ",(x==0?12:x),y);
}
    return 0;
}

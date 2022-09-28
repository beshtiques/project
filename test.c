#include <stdio.h>


int main()
{
    int x,y,z,a;
    scanf("%d%d%d%d",&x,&y,&z,&a);
    printf("\nthe largest : ");
    if (x>z && x>y && x>a)    printf("%d\n",x);
    if (z>x && z>y && z>a)    printf("%d\n",z);
    if (y>x && y>z && y>a)    printf("%d\n",y);
    if (a>x && a>y && a>z)    printf("%d\n",a);
    printf("the smallest :") ;
     if (x<z && x<y && x<a)    printf("%d\n",x);
    if (z<x && z<y && z<a)    printf("%d\n",z);
    if (y<x && y<z && y<a)    printf("%d\n",y);
    if (a<x && a<y && a<z)    printf("%d\n",a);

    return 0;
}

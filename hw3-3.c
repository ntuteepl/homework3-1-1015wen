#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    scanf("%d%d",&x,&y);
    int SUMx=(x/1000) + ((x%1000)/100) + ((x%100)/10) + (x%10);
    int SUMy=(y/1000) + ((y%1000)/100) + ((y%100)/10) + (y%10);
    if(SUMx==SUMy)
    {
        if(x<y)
        {
            printf("%d",x);
        }

        else
        {
            printf("%d",y);
        }
    }
    else if (SUMx<SUMy)
    {
        printf("%d",x);
    }

    else if(SUMy<SUMy) {printf("%d",y);}

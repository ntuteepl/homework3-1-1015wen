#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    if(b<c&&d<e)
    {
        printf("1");
    }
    if(b<c&&d>e&&e>=b)
    {
        printf("2");
    }
    if(b<c&&d>e&&e<b)
    {
        printf("3");
    }
    if(b>c&&d<e)
    {
        printf("1");
    }
    if(b>c&&d>e&&e>=b)
    {
        printf("2");
    }
    if(b>c&&d>e&&e<b)
    {
        printf("3");
    }
    
    return 0;
}

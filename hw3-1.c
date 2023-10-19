
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    if(a%2==0||a%3==0||a%5==0||a%7==0||a%11==0||a%13==0)
    {
       printf("NO"); 
    }
    else
    {
        printf("YES");
    }
    

    return 0;
}

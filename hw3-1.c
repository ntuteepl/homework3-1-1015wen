
#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    
    if(a%2==0||a%3==0||a%5==0||a%7==0||a%11==0||a%13==0)
    {
       printf("NO"); 
    }
    if(a==2||a==3||a==5||a==7||a==11||a==13||a==17||a==19||a==23)
    {
        printf("YES");
    }
    

    return 0;
}

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    for(int i=2;i*i<=a;i++)
    
        if(a%i==0)
        {
            printf("NO");
        }
        else
        {
            printf("YES");
        }
    
    

    return 0;
}

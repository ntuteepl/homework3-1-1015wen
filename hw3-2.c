#include <stdio.h>

int main()
{
    int s1,d1,s2,d2,s3,d3,car,temp;
    scanf("%d%d%d%d%d%d",&s1,&d1,&s2,&d2,&s3,&d3);
    if(s1>s2)
    {
        temp=s1;
        s1=s2;
        s2=temp;
        temp=d1;
        d1=d2;
        d2=temp;
    }
    if(s1>s3)
    {
        temp=s1;
        s1=s3;
        s3=temp;
        temp=d1;
        d1=d3;
        d3=temp;
    }

    if(s2>s3)
    {
     temp=s2;
     s2=s3;
     s3=temp;
     temp=d2;
     d2=d3;
     d3=temp;

    }



    if(s2>d1 && s3>d2)
    {
        car=1;
    }

    if(s2>=d1 && s3<d2)
     {
         car=2;
     }

    if(s2<d1 && s3<d2 && s3>=d1)
     {
         car=2;
     }

    if(s2<d1 && s3>=d2 )
     {
         car=2;
     }


    if(s2<d1 && s3<d2 && s3<d1)
     {
         car=3;
     }

    printf("%d",car);
    }

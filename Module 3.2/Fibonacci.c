#include<stdio.h>
void main()
{
    int a=0,b=1,c,n=10;

    for(int i=1 ; i<=n ; i++)
    {
        if(i==1)
        {
            printf("\t%d",a);
        }
        else if(i==2)
        {
            printf("\t%d",b);
        }
        else
        {
            c=a+b;
            a=b;
            b=c;
            printf("\t%d",c);
        }
    }
}
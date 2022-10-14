//reverse the number 64728
#include<stdio.h>
void main()
{
    int rem,i=64728;
    while(i!=0)
    {
        rem=i%10;
        i=i/5;
        printf("%d",rem);
    }
}
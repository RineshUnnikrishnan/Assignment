#include<stdio.h>
void main()
{
    int space=5;
    for(int i=1 ; i<=6 ; i++)
    {
        for(int j=1 ; j<=space ; j++)
        {
            printf(" ");
        }
        space --;
        for(int star=1 ; star<=(i*2)-1 ; star++)
        {
            printf("*");
        }
        printf("\n");
    }
}
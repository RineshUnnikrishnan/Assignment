#include<stdio.h>
void main()
{
    char cha='A';
    for(int i=1 ; i<=5 ; i++)
    {
        for(int j=1 ; j<=i ; j++)
        {
            printf("%c ",cha);
            cha++;
        }
        printf("\n");
    }
}
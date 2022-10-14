//How many Even numbers are there 
//How many odd numbers are there 
//Sum of even numbers 
//Sum of odd numbers  //WAP to print table up to given numbers 

#include<stdio.h>
void main()
{
    int i,j,evn=0,odd=0,n;
    int e=0,o=0;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1 ; i<=n ; i++)
    {
        if(i%2==0)
        {
            printf("%d\n",i);
            evn = evn + i;
            e++;
        }
        else if(i%2!=0)
        {
            printf("%d\n",i);
            odd = odd + i;
            o++;
        }
    }
    printf("Sum of even numbers: %d",evn);
    printf("\nSum of even numbers: %d",odd);
    printf("\nTotal number of even numbers: %d",e);
    printf("\nTotal number of odd numbers: %d",o);
}

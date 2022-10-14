//WAP to show Monday to Sunday using switch case
#include<stdio.h>
void main()
{
    int week,ncases;
    printf("Enter the day in number :");
    scanf("%d",&ncases);
    switch(ncases)
    {
        case 1:
        printf("\nMonday");
        break;
        case 2:
        printf("\nTuesday");
        break;
        case 3:
        printf("\nWednesday");
        break;
        case 4:
        printf("Thursday");
        break;
        case 5:
        printf("Friday");
        break;
        case 6:
        printf("Saturday");
        break;
        case 7:
        printf("Sunday");
        break;
    }
}
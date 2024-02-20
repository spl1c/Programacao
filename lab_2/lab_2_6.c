#include <stdio.h>

int main()
{
    int month;
    printf("Enter the number of a month: "); // input of the number of the month
    scanf("%d", &month);

    switch (month)
    {
    case 1:
        printf("This month has 31 days.");
        break;
    case 2:
        printf("This month has 28 days.");
        break;
    case 3:
        printf("This month has 31 days.");
        break;
    case 4:
        printf("This month has 30 days.");
        break;
    case 5:
        printf("This month has 31 days.");
        break;
    case 6:
        printf("This month has 30 days.");
        break;
    case 7:
        printf("This month has 31 days.");
        break;
    case 8:
        printf("This month has 31 days.");
        break;
    case 9:
        printf("This month has 30 days.");
        break;
    case 10:
        printf("This month has 31 days.");
        break;
    case 11:
        printf("This month has 30 days.");
        break;
    case 12:
        printf("This month has 31 days.");
        break;
    default:
        printf("This is an invalid month, it must be between 1 and 12.\n"); // in case no month is matched
        break;
    }



}
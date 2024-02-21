#include <stdio.h>

int main()
{
    int month;
    printf("Enter the number of a month: "); // input of the number of the month
    scanf("%d", &month);

    switch (month) // use switch case for the possible cases
    {
    case 1: 
    case 3:
    case 5:
    case 7: // only do one output for several cases
    case 8:
    case 10:
    case 12:
        printf("This month has 31 days."); 
        break; // use of break here is important here so the switch case doesn't keep reading
    case 2:
        printf("This month has 28 days.");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("This month has 30 days.");
        break;
    default:
        printf("This is an invalid month, it must be between 1 and 12.\n"); // in case no month is matched
        break;
    }



}
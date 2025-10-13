#include <stdio.h>

enum primaryColor {red, yellow, blue};
enum Month { January = 1, February, March, April, May, June,
July, August, September, October, November, December };

int main()
{
    printf("Hello World\n");

    enum primaryColor myColor = yellow;
    printf("myColor is %i \n", myColor);
    printf("Goodbye World\n");

    enum Month aMonth;
    int days;

    printf("Enter month number: ");
    scanf("%i", &aMonth);
    switch(aMonth)
    {
        case January:
        case March:
        case May:
        case July:
        case August:
        case October:
        case December:
            days = 31;
            break;
        case April:
        case June:
        case September:
        case November:
            days = 30;
            break;
        case February:
            days = 28;
            break;
        default:
            printf("bad month number\n");
            days = 0;
            break;
    }
    if (days != 0)
        printf("Number of days is %i \n", days);
    if (aMonth == February)
        printf("...or 29 if it's a leap year \n");
    return 0;

}
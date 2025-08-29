#include<stdio.h>

int centuryFromYear(int year) 
{
  return (year%100 == 0)? (year/100): (year/100 + 1);
}


int main() {

    printf("Hello World\n");
    
    int result1 = centuryFromYear(1704);
    int result2 = centuryFromYear(1900);
    int result3 = centuryFromYear(1601);
    int result4 = centuryFromYear(2000);
    int result5 = centuryFromYear(2742);

    printf("%i \n", result1);
    printf("%i \n", result2);
    printf("%i \n", result3);
    printf("%i \n", result4);
    printf("%i \n", result5);

    printf("Goodbye World\n");
}


#include <stdio.h>

int main()
{
    char c = 'X';
    char d = 'Y';
    char * const charPtr = &c;
    //charPtr = &d; //Invalid operation
    c = 'Z';
    *charPtr = 'A';
    printf("%c\n", *charPtr);
}
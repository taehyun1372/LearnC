#include <stdio.h>

int main()
{
    int count = 12, x;
    int *int_pointer;

    int_pointer = &count;
    x = *int_pointer;
    printf("count = %i, x = %i\n", count, x);
    int i;
    return 0;
}
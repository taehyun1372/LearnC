#include <stdio.h>

void test(int *int_pointer)
{
    *int_pointer = 100;
    int_pointer = 0; // This doesn't affect the original pointer
}

void exchange(int * const pint1, int * const pint2)
{
    int temp;
    temp = *pint1;
    *pint1 = *pint2;
    *pint2 = temp;
}

int main()
{
    int i =50, *p = &i;
    printf("Before the call to test i = %i\n", i);
    test(p);
    printf("After the call to test i = %i\n", i);

    int i1 = - 5, i2 = 66, *p1 = &i1, *p2 = &i2;
    printf("i1 = %i, i2 = %i\n", i1, i2);
    exchange(p1 ,p2);
    printf("i1 = %i, i2 = %i\n", i1, i2);
    exchange(&i1 ,&i2);
    printf("i1 = %i, i2 = %i\n", i1, i2);
    return 0;
}
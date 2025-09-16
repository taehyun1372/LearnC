#include <stdio.h>

void increase(int *input)
{
    *input += 1;
}

int main()
{
    printf("Hello World \n");
    int i = 10;

    int testArray[] = {1, 2, 3, 4, 5};

    printf("------printing integer variable addres----\n");
    printf("%d \n", i);
    printf("%i \n", &i);
    printf("%p \n", (void *)&i);

    printf("------printing array variable addres----\n");
    printf("%i \n", &testArray[0]);
    printf("%i \n", &testArray[1]);
    printf("%i \n", &testArray[2]);

    printf("------Increasing variable using pointer----\n");
    printf("%i \n", i);
    increase(&i);
    printf("%i \n", i);


    printf("Goodbye World \n");
}
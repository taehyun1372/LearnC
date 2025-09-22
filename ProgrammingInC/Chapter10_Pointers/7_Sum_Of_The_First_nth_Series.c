#include<stdio.h>
#include <stdlib.h>

char *series_sum(size_t n)
{
    char *result = calloc(10, sizeof(char));
    result = "Some world";
    return result;
}

int main()
{
    printf("Hello World \n");
    char *result = series_sum(10);
    printf("Result : %s \n", result);
    printf("Goodbye World \n");
}
#include <stdio.h>
#include <math.h>
#include <inttypes.h>
#include <stddef.h>

int positive_sum(const int values[/* count */], size_t count)
{
    int result = 0;
    for (int i = 0; i < count; i++)
    {
        if(values[i] > 0)
        {
            result += values[i];
        }
    }
    return result;
}

void powers_of_two (size_t n, uint64_t *powers)
{
    for (size_t i=0; i < n; i++)
    {
      powers[i] = pow(2, i);
    }
}

int main()
{
    printf("Hello World \n");
    int testee[] = {1, 2, 3, 4};

    printf("%p \n", (void*)testee);
    printf("%p \n", (void*)testee[0]);
    printf("%p \n", (void*)testee[1]);
    printf("%p \n", (void*)testee[2]);

    int result = positive_sum(testee, sizeof(testee)/sizeof(int));
    printf("Result : %d \n", result);
    perror("----Powers of 2---- \n");
    
    uint64_t powers[10];
    powers_of_two(10, powers);
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", powers[i]);
    }


    printf("Goodbye World \n");
}
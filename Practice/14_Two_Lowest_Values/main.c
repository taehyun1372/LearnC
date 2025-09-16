#include <stdio.h>
#include <limits.h>

long sum_two_smallest_numbers(size_t n, const int numbers[n]) {

    int lowest1 = numbers[0];
    int lowest2 = numbers[1];

    for (int i = 2; i < n; i++)
    {
        if (lowest1 > numbers[i] || lowest2 > numbers[i])
        {
            if(lowest1 > lowest2)
            {
                lowest1 = numbers[i];
            }
            else
            {
                lowest2 = numbers[i];
            }
        }
    }

    return (long)lowest1 + (long)lowest2;
}

long sum_two_smallest_numbers_example(size_t n, const int numbers[n])
{
    long small1 = INT_MAX, small2 = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        if (numbers[i] < small1)
        {
            small2 = small1;
            small1 = numbers[i];
        } else if (numbers[i] < small2) small2 = numbers[i];
    }
    return small1 + small2;
}

int main()
{
    printf("Hello World! \n");

    int numbers[5] = {15, 28, 4, 2, 43};
    int result = sum_two_smallest_numbers(5, numbers);
    
    printf("Result : %d \n", result);
    printf("Goodbye World! \n");
}
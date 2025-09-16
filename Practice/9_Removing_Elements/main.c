#include <stdio.h>

void display(int input[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%i", input[i]);
    }
    printf("\n");
}

void remove_element(size_t *length, size_t target, int *array)
{
    int index = 0;
    for (int i = 0; index < *length; i++)
    {
        if (i == target)
        {
            index += 1;
        }
        
        array[i] = array[index];
        index++;
    }
    
    *length -= 1;

    printf("remove_element Debugging \n");
    for (int i = 0; i < *length; i++)
    {
        printf("%i", array[i]);
    }
}

void remove_every_other(size_t *length, int array[])
{
// `length` is an input/output parameter.
// it points to the length of the array, and you must update it
// to report the new length:
    for (int i = 0; i < *length; i++)
    {
        if (i % 2 != 0)
        {
            remove_element(length, i, array);

            printf("remove_every_other Debugging \n");
            for (int i = 0; i < *length; i++)
            {
                printf("%i", array[i]);
            }
        }
    }
}


int main()
{
    printf("Hello World \n");

    int test1[] = {1,2,3,4,5};
    for (int i = 0; i < 4; i++)
    {
        test1[i] = test1[i+1];
    }
    display(test1, 4);

    int test2[] = {11,12,13,14,15};
    size_t length2 = 5;
    remove_every_other(&length2, test2);
    display(test2, length2);
    
    printf("Goodbye World \n");
}
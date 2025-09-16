#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    printf("Hello World \n");

    int *p = malloc(sizeof(int));
    if (p != NULL) //Always put this protection in mind in case malloc fails. 
    {
        *p = 12;
        printf("%d \n", *p);
        free(p);
        //p* = 3400 //Error 
    }

    printf("----Manual Initialization---- \n");

    int *test1;
    if ((test1 = malloc(sizeof(int) * 10)) != NULL)
    {
        printf("printing the original values \n");
        for (int i=0; i < 10; i++)
        {
            printf("%d \n", test1[i]);
        }

        for (int i=0; i < 10; i++)
        {
            test1[i] = i;
        }

        printf("printing after initializing the values \n");
        for (int i=0; i < 10; i++)
        {
            printf("%d \n", test1[i]);
        }

        free(test1);
    }

    printf("----memset Initialization---- \n");

    int *test2;
    if ((test2 = malloc(sizeof(int) * 10)) != NULL)
    {
        printf("printing the original values \n");
        for (int i=0; i < 10; i++)
        {
            printf("%d \n", test2[i]);
        }

        memset(test2, 0, sizeof(int) * 9);

                printf("printing after initializing the values \n");
        for (int i=0; i < 10; i++)
        {
            printf("%d \n", test2[i]);
        }

        free(test2);
    }

    printf("----calloc allocation---- \n");
    int *test3;
    if ((test3 = calloc(10, sizeof(int))) != NULL)
    {
        printf("printing the original values \n");
        for (int i=0; i < 10; i++)
        {
            printf("%d \n", test3[i]);
        }
    }

     printf("----realloc---- \n");

    float *num_floats;
    if((num_floats = malloc(sizeof(float)*10)) != NULL)
    {
        printf("printing the original values \n");
        for (int i=0; i < 10; i++)
        {
            printf("%f \n", num_floats[i]);
        }

        for (int i=0; i < 10; i++)
        {
            num_floats[i] = (i + 1)/10.0;
        }

        printf("printing after initializing the values \n");
        for (int i=0; i < 12; i++)
        {
            printf("%f \n", num_floats[i]);
        }

        printf("printing the original address of num_floats \n");
        printf("%p \n", num_floats);

        float *new_floats;
        new_floats = realloc(num_floats, sizeof(float) * 20);

        printf("printing the address after reallocation \n");
        printf("%p \n", new_floats);
    }
    

}
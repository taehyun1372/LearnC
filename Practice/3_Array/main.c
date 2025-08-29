#include <stdio.h>
#define INDEX 5

void foo(int x[12])
{
    printf("In foo function\n");
    printf("%zu\n", sizeof x );
    printf("%zu\n", sizeof(int));
    printf("%zu\n", sizeof x/sizeof(int));
}

void makedouble(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        a[i] = a[i] * 2;
    }
}

int main()
{
    int i;
    float f[4];

    f[0] = 3.14159;  // Indexing starts at 0, of course.
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;

    for (i = 0; i < 4; i++){
        printf("%f \n", f[i]);
    }

    int x[12];
    printf("%zu\n",sizeof x);
    printf("%zu\n",sizeof (int));
    printf("%zu\n",sizeof x/sizeof(int) );

    foo(x);
    printf("Array initializer\n");
    
    
    //int a[5] = {22, 37, 2490, 18, 95};
    //int a[5] = {22, 37, 3490};
    int a[INDEX] = {[3]=1};

    for (i = 0; i < 5; i++)
    {
        printf("%d\n", a[i]);
    }

    printf("Multiple array elements\n");

    int test1[3] = { 1, 2, 3};
    makedouble(test1, 3);
    for (i = 0; i < 3; i++)
    {
        printf("%i \n", test1[i]);
    }
}


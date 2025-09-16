#include<stdio.h>

void remove_exclamation_marks(const char *str_in, char *str_out) {
    printf("Input : %s\n", str_in);
    *str_out = 'Some result\0';
}

void test_pointer1(int *input)
{
    *input += 4;
}

int main()
{
    printf("Hello World! \n");

    char *userInput = "Some words we made..!";
    char *result = "";
    remove_exclamation_marks("Some words we made..!", &result);
    printf("%s \n", result);

    int result2;
    result2 = 10;
    int *pointer2;
    pointer2 = &result2;
    *pointer2 = 100;
    test_pointer1(&result2);
    printf("Result  2 : %i \n", result2);

    printf("Goodbye World! \n");
}
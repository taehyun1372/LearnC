
#include <stdio.h>
#include <ctype.h>

char *to_alternating_case() {
    char *input = "Some test words";
    char *result = malloc(20);
    
    result = "Some result words";
    //for (size_t i = 0; i < strlen(input); i++)
    //{
    //    result[i] = toupper(input[i]);
    //}
    return result;
}

int main()
{
    printf("Hello World\n");
    printf("%s \n",to_alternating_case());
    printf("Goodbye World\n");
}
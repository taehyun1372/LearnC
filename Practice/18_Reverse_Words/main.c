#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int find_index(const char *str, char target, int startIndex) {
    for (int i = startIndex; str[i] != '\0'; i++) {   // loop until null terminator
        if (str[i] == target) {
            return i; // found, return index
        }
    }
    return -2; // not found
}

char* reverseWords(const char* text) {
    // <---- hajime!
    printf("%s \n", text);
    char* result = malloc(sizeof(char) * strlen(text));
    int spaceIndex = -1;
    int nextIndex = -1;
    int count = 1;

    while(find_index(text, ' ', spaceIndex + 1) != -2)
    {
        nextIndex = find_index(text, ' ', spaceIndex + 1);
        count = 1;

        for (int i = spaceIndex + 1; i < nextIndex; i++)
        {
            result[i] = text[nextIndex - count];
            count ++;
        }
        result[nextIndex] = ' ';

        spaceIndex = nextIndex;
    }
    // return a heap-allocated string:
    return result;
}

int main()
{
    printf("Hello World \n");
    char* testee = "Some test words!";

    char* result = reverseWords(testee);
    printf("%s \n", result);
    printf("Goodbye World \n");
}


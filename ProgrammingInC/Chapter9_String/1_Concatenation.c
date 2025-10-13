#include <stdio.h>
#include <stdbool.h>


bool equalStrings(const char s1[], const char s2[])
{
    int i = 0;
    bool result = false;

    if (stringLength(s1) != stringLength(s2))
    {
        return false;
    }

    while(s1[i] != '\0')
    {
        result = (s1[i] != s2[i]) ? false : true;
        i++;
    }

    return result;
}

int stringLength(const char string[])
{
    int count = 0;
    while (string[count] != '\0')
    {
        count++;
    }
    return count;
}

void concat(char result[], const char str1[], const char str2[] )
{
    int i, j;

    for (i = 0; i < stringLength(str1); i++)
    {
        result[i] = str1[i];
    }

    for (j = 0; j < stringLength(str2); j++)
    {
        result[stringLength(str1) + j] = str2[j];
    }
}

void readLine(char buffer[])
{
    int i = 0;
    char a;
    do
    {
        a = getchar();
        buffer[i] = a;
        i++;
    } while(a != '\n');
}

void displayBuffer(char buffer[])
{
    for(int i = 0; i < stringLength(buffer); i++)
    {
        printf("%c", buffer[i]);
        buffer[i] = '\n';
    }
    printf("\n");
}

bool isAlphabetic(const char c)
{
    return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))? true: false;
}

int countWords (const char string[])
{
    int count = 0;
    bool isWord = false;
    for(int i = 0; i < stringLength(string); i++)
    {
        if(isAlphabetic(string[i]) && isWord == false) //At the start of a word
        {
            isWord = true;
            continue;
        }

        if(!isAlphabetic(string[i]) && isWord == true) //At the end of a word 
        {
            isWord = false;
            count++;
            continue;
        }
    }
    return count;
}

int main()
{
    printf("Hello World! \n");
    const char s1[] = { 'T', 'e', 's', 't', ' '};
    const char s2[] = { 'w', 'o', 'r', 'k', 's', '.' };
    char s3[11];
    concat(s3, s1, s2);
    for (int i = 0; i < 11; i++)
    {
        printf("%c", s3[i]);
    }

    printf("\n");

    const char testee1[] = "word1";
    const char testee2[] = "word1";
    printf("result : %d\n", equalStrings(testee1, testee2));

    // char buffer[100];

    // readLine(buffer);
    // displayBuffer(buffer);

    // readLine(buffer);
    // displayBuffer(buffer);

    // readLine(buffer);
    // displayBuffer(buffer);

    const char text1[] = "Well, here goes. my spilit!!";
    printf("result : %i\n", countWords(text1));


    return 0;


}


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void display1(char *input, int len)
{
    printf("display 1 function \n");
    printf("The len calculated was %i \n", strlen(input));
    for (int i = 0; i < len; i++)
    {
        printf("%c",input[i]);
        printf(" ");
    }
    printf("\n");
}

void display2(char input[], int len)
{
    printf("display 2 function \n");
    printf("The len calculated was %i \n", strlen(input));
    input[0] = 'Z';
    for (int i = 0; i < len; i++)
    {
        printf("%c",input[i]);
        printf(" ");
    }
    printf("\n");
}

void display3(char input[5], int len)
{
    printf("display 3 function \n");
    printf("The len calculated was %i \n", strlen(input));
    input[0] = 'Z';
    for (int i = 0; i < len; i++)
    {
        printf("%c",input[i]);
        printf(" ");
    }
    printf("\n");
}

char *getstring1()
{
    char *result = "result 1"; 
    printf("%s \n", result);
    return result; //One way to return a string is using string literal
}

char *getstring2()
{
    char *result = malloc(20); 
    strcpy(result,"result 2");
    printf("%s \n", result);
    return result; //One way to return a string is using string literal
}

int main()
{
    printf("passing string argumments \n");
    char *c1 = "This is some test word 1";
    char c2[] = "This is some test word  2";
    char c3[100] = "This is some test word   3";

    display1(c1, strlen(c1));
    display2(c2, strlen(c2));
    display3(c3, strlen(c3));


    printf("string copy \n");

    char original[] = "Hello World!";
    char  *changed;

    changed = original;

    changed[0] = 'z';
    printf("%s \n", original);
    printf("%s \n", changed);

    char original2[] = "Hello World!";
    char  changed2[100];

    strcpy(changed2, original2);
    changed2[0] = 'j';
    printf("%s \n", original2);
    printf("%s \n", changed2);

    char *returnvalue = getstring1(); //We cannot assign a string literal to a character array. 
    printf("%s \n", returnvalue);


    char *returnvalue2 = getstring2();
    printf("%s \n", returnvalue2);
    returnvalue2[0] = 'h';
    printf("%s \n", returnvalue2);
    
    printf("Goodbye World \n");

}


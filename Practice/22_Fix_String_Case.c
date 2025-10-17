#include <stdio.h>
#include <string.h>


char *solve(const char *str) {
    char *result = malloc(sizeof(char) * strlen(str));
    
    int lowCount = 0;
    int upperCount = 0;

    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z') lowCount++;
        if (str[i] >= 'A' && str[i] <= 'Z') upperCount++;
    }
    if (lowCount >= upperCount) 
    {
        for (int i = 0; i < strlen(str); i++) result[i] = tolower(str[i]);
    }
    else
    {
        for (int i = 0; i < strlen(str); i++) result[i] = toupper(str[i]);
    }
    result[strlen(str)] = '\0';

    return result;
}

int main(){
    printf("Hello World \n");
    char *input1 = "zfgSMOgAJbDubBALwOicgApVsGO";
    char *input2 = "CODe";
    char *input3 = "coDE";
    
    char *result1 = solve(input1);
    char *result2 = solve(input2);
    char *result3 = solve(input3);

    printf("Resuslt 1 : %s \n", result1);
    printf("Resuslt 2 : %s \n", result2);
    printf("Resuslt 3 : %s \n", result3);

    printf("Goodbye World \n");
}


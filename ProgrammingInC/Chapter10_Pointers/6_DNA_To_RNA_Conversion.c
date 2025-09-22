#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *dna_to_rna(const char *dna)
{
    char *result = malloc(strlen(dna) + 1);

    for(int i = 0; i < strlen(dna); i++)
    {
        if(dna[i] == 'T')
        {
            result[i] = 'U';
        }
        else
        {
            result[i] = dna[i];
        }
        result[strlen(dna)] = '\0';
    }
    return result;
}

int main()
{
    printf("Hello World \n");

    char *test = "Some world";
    printf("%s \n", dna_to_rna(test));

    printf("Goodbye World \n");
}
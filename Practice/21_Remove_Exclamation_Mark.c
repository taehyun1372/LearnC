#include<stdio.h>
#include<string.h>

void remove_mark (char *string)
{
	char* result = malloc(100);
	result = string;
	if (result[strlen(string) -1 ] == '!')
	{
		remove_at(string, strlen(string) - 1);
	}
	return result;
}

void remove_at(char *str, int index)
{
    int len = strlen(str);
    if (index < 0 || index >= len) return; // safety check

    for (int i = index; i < len; i++)
        str[i] = str[i + 1];
}

int main(){
	char stringLiteral[100] = "Some words";
	remove_mark(stringLiteral);
	printf("%s \n", stringLiteral);
    
}


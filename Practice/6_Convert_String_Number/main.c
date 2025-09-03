#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int string_to_number(char const *src) {
  int count = strlen(src) - 1; 
  int result = 0;
  int multiplier = 1;
  
  for (int i = 0; i < strlen(src); i++)
  {
    if (src[i] == '-')
    {
        multiplier = -1;
    }
    else
    {
        result += (src[i] - '0')* pow(10,count);
    }
    
    count--;
  }
  return result * multiplier;
}

int main()
{
    printf("Hello World \n");
    char *input = "-7";
    int result = string_to_number(input);
    printf("%i \n", result);
    printf("Goodbye World \n");
}
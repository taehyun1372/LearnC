#include<stdio.h>
#include<string.h>
#include <stdlib.h>

char *remove_url_anchor(const char *url_in) {

    int index = -1;
    
    for(unsigned i = 0; i< strlen(url_in); i++)
    {
      if(url_in[i] == '#')
      {
        index = i;
      }
    }
    if (index == -1)
    {
      return url_in;
    }

    char *result = malloc(sizeof(char) * ((unsigned)index + 1));
  
    for(unsigned i = 0; i < (unsigned)index; i++)
    {
        result[i] = url_in[i];
    }
    result[index] = '\0';
  
    return result;
}

int main(){
    printf("Hello World \n");
    char *input1 = "Something # Url ";
    char *input2 = "Something Url";
    char *result1 = remove_url_anchor(input1);
    char *result2 = remove_url_anchor(input2);

    printf("%s \n", result1);
    printf("%s \n", result2);

}
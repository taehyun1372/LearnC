#include<stdio.h>

unsigned short *reverse_seq(unsigned short num)
{
  unsigned short result[num];
  
  for(unsigned short  i = num - 1; i >= 0; i--)
  {
    result[i] = num;
  }
  return result;
}

int main()
{
    printf("Hello World\n");
    unsigned short* result = reverse_seq(5);
    printf("Goodbye World\n");
}
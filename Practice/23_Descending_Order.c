#include <stdio.h>
#include <inttypes.h>

uint64_t descendingOrder(uint64_t n)
{
  int result = 0;
  int digit = 0;
  uint64_t i = 0;
  while(1)
  {
    if(n / ipow10(i) != 0) break;
    else
    {
        digit = n % ipow10(i + 1);
        
    }
    i++
  }
  return result;
}

uint64_t ipow10(uint64_t exp) {
    uint64_t result = 1;
    while (exp--) 
    {
        result *= 10;
    }
    return result;
}

uint64_t swap(uint64_t original, uint64_t aIndex, uint64_t bIndex)
{
    uint64_t result = 0;
    uint64_t aDigit = ipow10(aIndex);
    uint64_t bDigit = ipow10(bIndex);

    uint64_t a = original % aDigit / (aDigit /10);
    uint64_t b = original % bDigit / (bDigit /10);
    result = original - a * (aDigit /10) - b * (bDigit /10) + a * (bDigit /10) + b * (aDigit /10);
    return result;
}

int main()
{
    printf("Hello World \n");
    uint64_t testee1 = 42145;
    uint64_t testee2 = 145263;
    uint64_t testee3 = 123456789;

    printf("Result 1 : %i \n", descendingOrder(testee1));
    printf("Result 2 : %i \n", descendingOrder(testee2));
    printf("Result 3 : %i \n", descendingOrder(testee3));

    printf("Goodbye World \n");
}
#include<stdio.h>

int sum(const int numbers[/*length*/], int length)
{
    int sum = 0;

    if (length == 0) return 0;
    int low = numbers[0];
    int high = numbers[0];
    for (int i = 0; i < length; i++)
    {
      sum += numbers[i];
      if (numbers[i] < low) low = numbers[i];
      if (numbers[i] > high) high = numbers[i];
    }
    return (high == low)? sum - low : sum -low - high;
}

int main()
{
    printf("Hello World\n");

    int a[] = {6, 2, 1, 8, 10};
    int b[] = {6};
    int c[] = {6, 7};
    int d[] = {6, 0, 1, 10, 10 };
    int e[] = {-6, -20, -1, -10, -12 };
    int f[] = {-6, 20, -1, 10, -12 };
    

    int result1 = sum(a, 5);
    int result2 = sum(b, 1);
    int result3 = sum(c, 2);
    int result4 = sum(d, 5);
    int result5 = sum(e, 5);
    int result6 = sum(f, 5);


    printf("Result1 : %i\n",result1); 
    printf("Result2 : %i\n",result2); 
    printf("Result3 : %i\n",result3); 
    printf("Result4 : %i\n",result4); 
    printf("Result5 : %i\n",result5); 
    printf("Result6 : %i\n",result6); 


    printf("Goodbye World\n");
}
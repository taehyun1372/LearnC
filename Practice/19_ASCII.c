#include<stdio.h>

enum ASCII{
    A=65,
    B=66
};

char GetASCII(int r)
{
    switch(r){
        case A:
            return 'A';
        case B:
            return 'B';
    }
}

int main()
{
    printf("Hello World\n");
    enum ASCII a; // enum ASCII type a
    a = A;
    a = B;
    a = 11; // C doesn't force values being in defined range.
    printf("%i \n", a);

    printf("%c \n", (char)A);
    printf("%c \n", GetASCII(65));
    printf("Goodbye World\n");
}
#include <stdio.h>

enum tool{ROCK, PAPER, SCISSORS};
enum outcome {P1_WON, P2_WON, DRAW};

enum outcome rps(enum tool p1, enum tool p2)
{
    int result;
    if (p1 == p2)
    {
        result = DRAW;
    }
    else if ((p1==ROCK && p2==SCISSORS) || (p1==PAPER && p2==ROCK) || (p1==SCISSORS && p2==PAPER))
    {
        result = P1_WON;
    }
    else
    {
        result = P2_WON;
    }
    return result;
}

int main()
{
    printf("Hello World \n");
    int result = rps(ROCK, PAPER);
    printf("%i \n", result);
    printf("Goodbye World \n");
}
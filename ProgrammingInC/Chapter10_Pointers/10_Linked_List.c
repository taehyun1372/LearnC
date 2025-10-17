#include<stdio.h>

struct entry
{
    int value;
    struct entry *next;
};

void print_list(struct entry *pointer)
{
    while(pointer != 0)
    {
        printf("%i\n", pointer->value);
        pointer = pointer->next;
    }
}

struct entry *get_element(struct entry *listPtr, int match)
{
    while(listPtr->next != 0)
    {
        if ( listPtr->value = match) return listPtr;
        listPtr = listPtr->next;
    }

    return 0;
}

int main()
{
    struct entry n1, n2, n3;
    struct entry *list_pointer = &n1;
    int i;
    n1.value = 100;
    n2.value = 200;
    n3.value = 300;

    n1.next = &n2;
    n2.next = &n3;
    n3.next = 0;

    i = n1.next -> value;
    printf("%i ", i);
    printf("%i\n", n2.next->value);

    print_list(&n1);

    struct entry *result = get_element(list_pointer, 400);
    printf("Found element : %i\n");
    return 0;

    
}
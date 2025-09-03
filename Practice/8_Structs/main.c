#include<stdio.h>

struct car{
    char *name;
    float price;
    int speed;
};

void display_car1(struct car *c)
{
    printf("Name %s \n", (*c).name);
    printf("Price (USD) %f \n", (*c).price);
    printf("Top Speed (km) %d\n", c -> speed);
}

void display_car2(struct car c)
{
    printf("Name %s \n", c.name);
    printf("Price (USD) %f \n", c.price);
    printf("Top Speed (km) %d\n", c.speed);
}

void set_car1(struct car *c)
{
    c -> name = " Edited 1";
    c -> price += 1000;
    c -> speed += 100;
}

struct car set_car2(struct car c)
{
    c.name = " Edited 2";
    c.price += 10000;
    c.speed += 1000;
    return c;
}

int main()
{
    printf("Hello World \n");
    struct car saturn;
    saturn.name = "Saturn SL/2";
    saturn.price = 15999.99;
    saturn.speed = 175;

    display_car1(&saturn);

    struct car princess = {"Princess 1.7", 16000.99, 175};

    display_car2(princess);

    struct car cona = {.name="Red cona", .price=1350.00};

    printf("------original value--------\n");
    display_car2(cona);

    
    set_car1(&cona);
    printf("------Edited 1 value--------\n");
    display_car2(cona);

    cona = set_car2(cona);
    printf("------Edited 2 value--------\n");
    display_car2(cona);

    struct car copy_cona = cona;
    printf("------Some modification in copy--------\n");
    copy_cona.name = "copied cona";
    copy_cona.price = 9999.999;
    copy_cona.speed = 999;
    display_car2(cona);


    
    printf("Goodbye World \n");
}
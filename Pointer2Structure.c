#include <stdio.h>
#include <stdlib.h>

struct Rectangle {

    int lenght; 
    int breadth;
};
int main() {

    //STATIC

    // struct Rectangle r = {10,5}; //In C++ we can skip the word 'struct' 
    // printf("%d\n", r.lenght);
    // printf("%d\n", r.breadth);

    // struct Rectangle *p = &r; //Initialized pointer 
    // printf("%d\n", p -> lenght);
    // printf("%d\n", p -> breadth);}



    //HEAP
    struct Rectangle *p;
    p = (struct Rectangle *)malloc(sizeof(struct Rectangle));
    p -> lenght = 15;
    p -> breadth = 7; 

    printf("%d\n", p->lenght);
    printf("%d\n", p->breadth);


    return 0;
}
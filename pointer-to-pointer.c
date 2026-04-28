#include <stdio.h>

int main() {
    int x = 5;
    // A normal integer variable storing value 5

    int *p = &x;
    // 'p' is a pointer to an integer
    // It stores the memory address of 'x'
    // So, p = address of x

    int **q = &p;
    // 'q' is a pointer to a pointer (double pointer)
    // It stores the address of pointer 'p'
    // So, q = address of p

    printf("%p\n", *q);
    // *q means "value stored at address q"
    // Since q stores address of p, *q = p
    // And p holds address of x
    // So this prints the address of x

    printf("%d\n", **q);
    // **q means "value at the address stored in *q"
    // Step-by-step:
    // q -> p -> x
    // *q = p
    // **q = value of x = 5
    // So this prints 5

    return 0;
}

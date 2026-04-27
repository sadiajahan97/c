#include <stdio.h>

int main() {
    int a = 5;
    // A normal integer variable stored somewhere in memory

    int *p = &a;
    // Pointer 'p' stores the address of 'a'

    printf("%p\n", p);
    // Prints address of 'a' (because p = &a)

    printf("%d\n", *p);
    // Dereferencing: gives value at address stored in p → 5

    printf("%zu\n", sizeof(int));
    // Size of int in bytes (commonly 4 bytes, but system-dependent)

    printf("%p\n", p + 1);
    // Pointer arithmetic:
    // p + 1 does NOT mean +1 byte
    // it moves forward by sizeof(int) bytes
    // so if int = 4 bytes, address increases by 4

    printf("%d\n", *(p + 1));
    // ⚠️ VERY IMPORTANT:
    // This tries to read the value at the NEXT int location in memory
    // BUT we did NOT allocate or define anything there
    // This is called "undefined behavior"
    // It may print garbage value or crash

    return 0;
}

#include <stdio.h>

int main() {
    // Declare an integer variable
    int a = 1025;
    // In memory (assuming 4 bytes, little-endian):
    // 1025 = 00000100 00000001 (binary)
    // Stored as: 01 04 00 00 (byte-by-byte, little-endian)

    // Pointer to int (points to the address of 'a')
    int *p = &a;

    // Void pointer (generic pointer, can hold address of any data type)
    void *p0;

    // Assigning int pointer to void pointer (valid in C)
    // No type information is stored in void*
    p0 = p;

    // ❌ This would cause a compilation error:
    // printf("%d\n", *p0);
    // Reason:
    // - void* is a "typeless" pointer
    // - Compiler doesn't know how many bytes to read
    // - You must cast it before dereferencing:
    //   *(int*)p0

    // Print the address stored in p0
    printf("%p\n", p0);

    // ⚠️ Pointer arithmetic on void* is NOT standard in C
    // In standard C:
    // - You cannot do p0 + 1 because size of void is unknown
    // - Some compilers (like GCC) allow it as an extension,
    //   treating void* like char* (i.e., +1 byte)

    printf("%p\n", p0 + 1);

    // ✅ Proper way (portable C):
    // Cast to char* if you want byte-wise movement
    // printf("%p\n", (char*)p0 + 1);

    // Or cast to int* if you want to move by sizeof(int)
    // printf("%p\n", (int*)p0 + 1);

    return 0;
}

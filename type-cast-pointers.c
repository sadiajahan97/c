#include <stdio.h>

int main() {
    int a = 1025;
    // 1025 in binary (32-bit int):
    // 00000000 00000000 00000100 00000001
    // = 0x00000401 (hex)

    int *p = &a;
    // p stores the address of variable 'a'

    printf("%p\n", p);
    // Prints the memory address of 'a'

    printf("%d\n", *p);
    // Dereferencing p → value at address of 'a'
    // Output: 1025

    printf("%d\n", *(p + 1));
    // Moves pointer by sizeof(int) bytes (usually 4 bytes)
    // So (p + 1) points to memory AFTER 'a'
    // Dereferencing it reads garbage / undefined value
    // ⚠️ Undefined behavior: not safe, just for demonstration

    char *p0;

    // p0 = p; ❌ Not allowed (type mismatch: int* → char*)
    p0 = (char *)p;
    // Type casting: treat the same address as a char pointer
    // Now pointer arithmetic works byte-by-byte instead of 4 bytes

    printf("%p\n", p0);
    // Same address as p, just interpreted differently

    printf("%d\n", *p0);
    // Reads FIRST byte of 'a'
    // On little-endian systems (most machines):
    // lowest byte stored first → 00000001 = 1

    printf("%d\n", *(p0 + 1));
    // Reads SECOND byte of 'a'
    // 00000100 = 4

    // Memory layout of 1025 (little-endian):
    // Address:   Value (byte)
    // p0      →  00000001 (1)
    // p0 + 1  →  00000100 (4)
    // p0 + 2  →  00000000
    // p0 + 3  →  00000000

    return 0;
}

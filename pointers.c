#include <stdio.h>

int main() {
    int a = 5;
    // 'a' is a normal integer variable stored somewhere in memory

    int *p = &a;
    // 'p' is a pointer variable
    // it stores the ADDRESS of 'a'
    // '&a' means "address of a"

    printf("%d\n", *p);
    // '*p' means "value at the address stored in p"
    // since p points to 'a', *p gives value of 'a' → 5

    printf("%p\n", p);
    // prints the address stored in pointer 'p'
    // this should be same as address of 'a'

    printf("%p\n", &a);
    // prints the actual address of 'a'

    printf("%p\n", &p);
    // prints the address of the pointer variable 'p' itself
    // IMPORTANT: this is different from the address stored inside 'p'

    *p = 10;
    // modifies value at the address stored in 'p'
    // since p points to 'a', this changes a = 10

    printf("%d\n", a);
    // confirms that 'a' is now 10

    int b = 20;
    // another integer variable

    *p = b;
    // assigns value of 'b' to the location pointed by 'p'
    // so 'a' becomes 20

    printf("%d\n", a);
    // confirms that 'a' is now 20

    printf("%p\n", p);
    // pointer 'p' still holds address of 'a'
    // it did NOT change, only the value at that address changed

    return 0;
}

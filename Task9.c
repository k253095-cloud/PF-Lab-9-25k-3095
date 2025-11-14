#include <stdio.h>

int main() {
    int a = 100, b = 200, c = 300;

    // Pointer declarations
    int *p1 = &a;
    int *p2 = &b;
    int *p3 = &c;

    // First pointer swap
    int *temp = p1;
    p1 = p2;
    p2 = p3;
    p3 = temp;

    // Modify values
    *p1 = *p1 + 10;  // b + 10
    *p2 = *p2 - 20;  // c - 20
    *p3 = *p3 * 2;   // a * 2

    // Reassign pointers
    p1 = &a;
    p2 = &b;
    p3 = &c;

    // Modify values again
    *p1 = *p1 - 15;  // a - 15
    *p2 = *p2 * 3;   // b * 3
    *p3 = *p3 + 5;   // c + 5

    // Print final values
    printf("Final value of a = %d\n", a);
    printf("Final value of b = %d\n", b);
    printf("Final value of c = %d\n", c);

    return 0;
}


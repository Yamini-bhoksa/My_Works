#include <stdio.h>

int main() {
    int a, b, temp1, temp2;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    temp1 = a; temp2 = b;

    while(temp2 != 0) {
        int rem = temp1 % temp2;
        temp1 = temp2;
        temp2 = rem;
    }

    printf("GCD of %d and %d is %d\n", a, b, temp1);
    return 0;
}

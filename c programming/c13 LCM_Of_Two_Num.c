#include <stdio.h>

int main() {
    int a, b, gcd, lcm;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    
    int temp1 = a, temp2 = b;
    while(temp2 != 0) {
        int rem = temp1 % temp2;
        temp1 = temp2;
        temp2 = rem;
    }
    gcd = temp1;
    lcm = (a * b) / gcd;

    printf("LCM of %d and %d is %d\n", a, b, lcm);
    return 0;
}

#include <stdio.h>

int HCF(int a, int b) {
    if(b == 0) {
        return a;
    }
    return HCF(b, a % b);
}

int main() {
    int n1, n2;
    printf("Enter 2 Integers Please:\n");
    printf("-------------------------\n");
    scanf("%d %d", &n1, &n2);

    printf("The HCF of %d and %d is: %d\n", n1, n2, HCF(n1, n2));
    return 0;
}

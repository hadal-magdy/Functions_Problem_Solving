#include <stdio.h>

int LCM(int a, int b, int current) {
    if (current % a == 0 && current % b == 0) {
        return current;
    }
    return LCM(a, b, current + 1);
}

int main()
{

    int n1, n2;
    printf("Please enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    int result = LCM(n1, n2, (n1 > n2) ? n1 : n2);
    printf("LCM of (%d) and (%d) is (%d)\n", n1, n2, result);
    return 0;
}

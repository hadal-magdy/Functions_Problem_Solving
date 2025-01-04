#include <stdio.h>

int main()
{

    while (1)
    {
        int num;
        printf("enter the number\n");
        scanf("%d", &num);
        even_or_odd(num);
    }

    return 0;
}

void even_or_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("%d is an even number\n", n);
    }
    else
    {
        printf("%d is an odd number\n", n);
    }
}
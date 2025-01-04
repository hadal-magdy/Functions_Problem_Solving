#include <stdio.h>
#include <stdbool.h>
int main()
{

    while(1)
    {
        int n;
        printf("Enter the number\n");
        scanf("%d",&n);
        is_prime_number(n);
    }
    return 0;
}

void is_prime_number(int number)
{

    bool is_prime = true;
    if(number == 1 || number == 0)
    {
        is_prime = false;
        printf("The number %d isn't a prime number \n",number);
        return is_prime;
    }
    for(int i = 2 ; i <= number/2 ; i++)
    {
        if (number % i == 0)
        {
            is_prime = false;
            printf("The number %d isn't a prime number \n",number);
            return is_prime;
        }
    }
    printf("The number %d is a prime number \n",number);
    return is_prime;
}

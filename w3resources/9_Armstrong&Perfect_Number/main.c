#include <stdio.h>

int main()
{
    armstrong(370);
    perfect(28);
    return 0;
}


int armstrong(int number)
{
    int digit;
    int temp = number;
    int sum = 0;
    while(temp > 0)
    {
        digit = temp % 10;
        sum += digit*digit*digit;
        temp = temp/ 10;
    }
    if(number == sum)
    {
        printf("%i is armstrong\n",number);
        return 1;
    }
    else
    {
        printf("%i isn't armstrong\n",number);
        return 0;
    }
}
int perfect(int number)
{
    int sum = 1;
    for(int i = 2 ; i <= number/2 ; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if(number == sum)
    {
        printf("%i is perfect\n",number);
        return 1;
    }
    else
    {
        printf("%i isn't perfect\n",number);
        return 0;
    }
}

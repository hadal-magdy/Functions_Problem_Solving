#include <stdio.h>
#include <stdbool.h>
void all_strong(int start,int end);
int is_strong(int number);
int fact (int n);
int main()
{
    printf("all the strong numbers between 1 and 100 is:\n");
    all_strong(1,1000);
    return 0;
}
void all_strong(int start,int end)
{
    while(start <= end)
    {
        if(is_strong(start))
        {
            printf("%d \t",start);
        }
        start++;
    }

}
int is_strong(int number)
{
    int digit;
    int temp = number;
    int sum = 0;
    while(temp > 0)
    {
        digit = temp % 10;
        sum += fact(digit);
        temp = temp/ 10;
    }
    if(number == sum)
    {
        //printf("%i is strong\n",number);
        return 1;
    }
    else
    {
        //printf("%i isn't strong\n",number);
        return 0;
    }
}
int fact (int n)
{
    int fact = 1;
    if(n <= 1)
    {
        return 1;
    }
    else
    {
        for(int i = n; i > 1; i--)
        {
            fact *= i;
        }
        return fact;
    }
}



#include <stdio.h>
#include <math.h>
int factor(int num);
int reversing_numbers(int num);
int main()
{
    int number = 123456789;
    int result = reversing_numbers(number);
    printf("%d",result);
    return 0;
}
int factor(int num)
{
    int digits = 0;
    while(num != 0)
    {
        num = num / 10;
        ++digits;
    }
    return pow(10,digits);
}
int reversing_numbers(int num)
{
    int temp = num % 10;
    int fact = factor(num)/10;
    while(num != 0)
    {
        return temp * fact + reversing_numbers(num/10);
    }
}

#include <stdio.h>
#include <stdbool.h>
int main()
{
    int sum = all_natural_numbers(1,10);
    printf("sum = %i",sum);
    return 0;
}

int all_natural_numbers(int lower_bound, int upper_bound)
{
    if(lower_bound <= upper_bound)
    {
        return lower_bound + all_natural_numbers(lower_bound+1,upper_bound);
    }
}


#include <stdio.h>
#include <stdbool.h>
int main()
{
    all_natural_numbers(0,100);
    return 0;
}

void all_natural_numbers(int lower_bound, int upper_bound)
{
    if(lower_bound <= upper_bound && lower_bound != 0){
        printf("%d\t",lower_bound);
    }
    all_natural_numbers(lower_bound+1,upper_bound);
}

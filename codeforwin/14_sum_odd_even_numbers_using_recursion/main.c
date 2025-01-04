#include <stdio.h>
int main(){
    int sum = print_even_odd(2,100);
    printf("%i",sum);
    return 0;
}
int print_even_odd(int lower_bound, int upper_bound){
    if(lower_bound <= upper_bound){
        return lower_bound + print_even_odd(lower_bound+2,upper_bound);
    }
}

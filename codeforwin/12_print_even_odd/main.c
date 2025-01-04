#include <stdio.h>
int main(){
    print_even_odd(1,10);
    return 0;
}
void print_even_odd(int lower_bound, int upper_bound){
    if(lower_bound <= upper_bound){
        printf("%d  ",lower_bound);
    }
    print_even_odd(lower_bound+2,upper_bound);
}

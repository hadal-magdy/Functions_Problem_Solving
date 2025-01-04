#include<stdio.h>

int main()
{

    int result = sum_of_numbers_digits(7686);
    printf("%i",result);
    return 0;
}

int sum_of_numbers_digits(int num){

    if(num != 0){
        int digit = num % 10;
        return digit + sum_of_numbers_digits(num / 10);
    }


}

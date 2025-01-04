#include <stdio.h>
#include <stdbool.h>
void all_prime(int start ,int end);
int is_prime(int number);
int main()
{
    printf("all the prime numbers between 1 and 100 is:\n");
    all_prime(1,100);
    return 0;
}
void all_prime(int start ,int end){
    while(start <= end){
        if(is_prime(start)){
            printf("%d \t",start);
        }
        start++;
    }

}
int is_prime(int number)
{

    if(number == 1 || number == 0)
    {
        //printf("The number %d isn't a prime number \n",number);
        return 0;
    }
    for(int i = 2 ; i <= number/2 ; i++)
    {
        if (number % i == 0)
        {
            //printf("The number %d isn't a prime number \n",number);
            return 0;
        }
    }
    //printf("The number %d is a prime number \n",number);
    return 1;
}

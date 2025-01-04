#include <stdio.h>
void all_perfect(int start ,int end);
int is_perfect(int number);
int main()
{
    printf("all the perfect numbers between 1 and 100 is:\n");
    all_perfect(1,100);
    return 0;
}
void all_perfect(int start ,int end){
    while(start <= end){
        if(is_perfect(start)){
            printf("%d \t",start);
        }
        start++;
    }

}
int is_perfect(int number)
{
    int sum = 1;
    for(int i = 2 ; i <= number/2 ; i++)
    {
        if (number % i == 0)
        {
            sum += i;
        }
    }
    if(number == sum && number > 1)
    {
        //printf("%i is perfect\n",number);
        return 1;
    }
    else
    {
        //printf("%i isn't perfect\n",number);
        return 0;
    }
}

#include <stdio.h>
void all_armstrong(int start ,int end);
int is_armstrong(int number);
int main()
{
    printf("all armstrong numbers between 1 and 1000 is:\n");
    all_armstrong(0,1000);
    return 0;
}
void all_armstrong(int start ,int end){
    while(start <= end){
        if(is_armstrong(start)){
            printf("%d \t",start);
        }
        start++;
    }

}
int is_armstrong(int number)
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
        //printf("%i is armstrong\n",number);
        return 1;
    }
    else
    {
        //printf("%i isn't armstrong\n",number);
        return 0;
    }
}

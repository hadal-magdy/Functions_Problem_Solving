#include <stdio.h>
int decimal_to_binary(int decimal);
int main()
{

    int result = decimal_to_binary(65);
    printf("%d",result);
    return 0;
}
int decimal_to_binary(int decimal)
{
    int binary = 0;
    int pos = 1;
    int remainder;
    while(decimal > 0){
        remainder = decimal % 2;
        binary += remainder*pos;
        pos *= 10;
        decimal /= 2;
    }
    return binary;
}

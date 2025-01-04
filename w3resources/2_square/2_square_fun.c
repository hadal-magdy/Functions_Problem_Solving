#include <stdio.h>

int square(int num);
int square(int num){
    return num*num;
}
int main(){
    /*
    2. Write a program in C to find
    the square of any number using the function.
    Test Data :
    Input any number for square : 20
    Expected Output :
    The square of 20 is : 400.00
    */
    printf("enter the number\n");
    int num;
    scanf("%i",&num);
    printf("The square of %i is : %i",num,square(num));

}

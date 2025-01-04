#include <stdio.h>
#include <stdlib.h>
int total(int n1,int n2);
int total(int n1,int n2){
    return n1+n2;
}
int main()
{
    /*
    1. Write a program in C to show the simple structure of a function.
    Expected Output :
    The total is :  11
    */

    printf("The total is : %i \n",total(5,6));
    return 0;
}

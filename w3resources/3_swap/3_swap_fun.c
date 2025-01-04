#include <stdio.h>
void swap(int*n1,int*n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}
int main()
{
    /*
    3. Write a program in C to swap two numbers using a function.
    Test Data :
    Input 1st number : 2
    Input 2nd number : 4
    Expected Output :

    Before swapping: n1 = 2, n2 = 4
    After swapping: n1 = 4, n2 = 2
    */
    int n1 = 2;
    int n2 = 4;
    printf("Before swapping: n1 = %i, n2 = %i\n",n1,n2);
    swap(&n1,&n2);
    printf("After swapping: n1 = %i, n2 = %i\n",n1,n2);

    return 0;
}

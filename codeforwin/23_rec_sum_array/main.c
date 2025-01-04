#include <stdio.h>
#define SIZE 5

int sum(int *array,int size)
{
    static int result = 0;
    if(size == 0)
    {
        return result;
    }
    else
    {
        result += *array;
        sum(array+1,size-1);
    }

}
int main()
{
    int array[SIZE] = {1,2,3,4,5};
    printf("sum of the elements is:\t%d",sum(array,SIZE));
    return 0;

}

//this is better
int summation(int arr[], int start, int len)
{
    /* Recursion base condition */
    if(start >= len)
        return 0;

    return (arr[start] + summation(arr, start + 1, len));
}


#include <stdio.h>
int * max_min(int arr[], int size);
int main()
{
    int array[5] = {1,2,3,4,5};
    int size = 5;
    int * address = max_min(array,size);
    printf("min value is %d ",*address);
    printf("max value is %d ",*(address+1));
    return 0;
}
int * max_min(int arr[], int size)
{

    static int result[2];
    result[0] = arr[0];
    result[1] = arr[0];
    for(int i = 0 ; i < size ; i++)
    {
        if(result[0] > arr[i])
        {
            result[0] = arr[i];
        }
        if(result[1] < arr[i])
        {
            result[1] = arr[i];
        }
    }

    return result;

}

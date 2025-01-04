#include <stdio.h>
#define MAX_SIZE 5
void display(int *array,int size)
{
    if(size == 0)
    {
        /*do nothing*/
    }
    else
    {
        printf("%d\t",*array);
        display(array+1,size-1);
    }

}
int main()
{
    int array[5] = {1,2,3,4,5};
    printf("displaying the elements:\n\n");
    display(array,5);
    return 0;

}


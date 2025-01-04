#include <stdio.h>

int main(){

    int arr[5];
    for(int i = 0; i < 5; i++){
        printf("enter the element number %i\n",i);
        scanf(" %i",&arr[i]);
    }
    printf("the largest number is %i",array_largest_number(arr));

    return 0;
}
int array_largest_number(int arr[]){

    int max = arr[0];
    for(int i = 0;i < 5; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

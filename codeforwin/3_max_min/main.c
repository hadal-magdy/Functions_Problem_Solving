#include <stdio.h>

int main(){

    int n1 = 3;
    int n2 = 4;
    int max;
    int min;
    max_min(n1,n2,&max,&min);
    printf("the max number is %i\n",max);
    printf("the min number is %i\n",min);
    return 0;
}
void max_min(int n1,int n2,int * max , int * min){
    if(n1 > n2){
        *max = n1;
        *min = n2;
    }
    else{
        *max = n2;
        *min = n1;
    }
}
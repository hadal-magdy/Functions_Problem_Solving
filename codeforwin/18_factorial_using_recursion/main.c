#include<stdio.h>
int fact(int num);
int main()
{

    int result = fact(6);
    printf("%i",result);
    return 0;
}

int fact(int num){

    if(num > 1){
        return num * fact(num-1);
    }


}


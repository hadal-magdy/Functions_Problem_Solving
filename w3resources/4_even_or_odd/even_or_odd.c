#include <stdio.h>
void even_or_odd(int number){
    if(number%2==0){
        printf("this number is even");
    }
    else{
        printf("this number is odd");
    }
}

int main(){

    even_or_odd(3);
    return 0;
}

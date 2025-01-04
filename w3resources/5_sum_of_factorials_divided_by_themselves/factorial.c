#include<stdio.h>
int fact (int n){
    int fact = 1;
    if(n <= 1){
        return 1;
    }
    else{
        for(int i = n; i > 1;i--){
            fact *= i;
        }
        return fact;
    }
}


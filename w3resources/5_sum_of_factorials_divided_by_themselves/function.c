#include <stdio.h>
#include "headers.h"
int fun (int n){
    int sum = 0;
    for(int i = n; i > 0; i--){
        sum += fact(i)/i;
    }
    return sum;
}

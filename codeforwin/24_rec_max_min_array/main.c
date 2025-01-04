#include <stdio.h>
#define SIZE 5

void max_min(int *array, int size, int *max, int *min) {

    int current_elem = *array;

    if (size == 1) {
        if (current_elem > *max) {
            *max = current_elem;
        }
        if (current_elem < *min) {
            *min = current_elem;
        }
        return;
    }

    if (current_elem > *max) {
        *max = current_elem;
    }
    if (current_elem < *min) {
        *min = current_elem;
    }

    max_min(array + 1, size - 1, max, min);
}

int main() {
    int array[SIZE] = {1, 2, 3, 4, 5};
    int max = array[0];
    int min = array[0];

    max_min(array, SIZE, &max, &min);
    printf("The maximum element is (%d) and the minimum one is (%d)\n", max, min);

    return 0;
}

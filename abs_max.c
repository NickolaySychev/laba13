#include <stdio.h>
#include <stdlib.h>

int abs_max(int arr[], int count) {
    int max_number = 0, result = 0;
    for (int i = 0; i < count; i++) {
        if (abs(arr[i]) > max_number) {
            max_number = abs(arr[i]);
            result = arr[i];
        }
    }
    return result;
}
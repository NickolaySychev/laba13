#include <stdio.h>
#include <stdlib.h>

int abs_min(int arr[], int count) {
    int min_number = abs(arr[0]), result = 0;
    for (int i = 1; i < count; i++) {
        if (abs(arr[i]) < min_number) {
            min_number = abs(arr[i]);
            result = arr[i];
        }
    }
    return result;
}

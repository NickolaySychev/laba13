#include <stdio.h>
#include <stdlib.h>
#include "abs_max.h"

int sum(int arr[], int count) {
    int max_number = abs_max(arr, count);
    int fl = 0, result = 0;
    for (int i = 0; i < count; i++) {
        if (arr[i] == max_number && fl == 0) {
            fl = 1;
        }
        if (fl == 1) {
            result += arr[i];
        }
    }
    return result;
}
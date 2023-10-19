#include <stdio.h>
#include <stdlib.h>

#include "abs_max.h"
#include "abs_min.h"
#include "diff.h"
#include "sum.h"

#define N 100

int main() {
    int count = 0;
    int arr[N], key;
    char space;

    scanf("%d%c", &key, &space);
    while (count < 100 && space != '\n') {
        scanf("%d%c", &arr[count], &space);
        count++;
    }

    switch (key) {
    case 0:
        printf("%d\n", abs_max(arr, count));
        break;
    case 1:
        printf("%d\n", abs_min(arr, count));
        break;
    case 2:
        printf("%d\n", diff(arr, count));
        break;
    case 3:
        printf("%d\n", sum(arr, count));
        break;
    default:
        printf("Данные некорректны\n");
    }
}
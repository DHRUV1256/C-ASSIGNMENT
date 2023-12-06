#include <stdio.h>

void findDuplicates(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                printf("Duplicate found: %d\n", arr[i]);
            }
        }
    }
}

int main() {
    int arr[] = {6, 2, 5, 4, 3, 2, 7, 9, 5, 8, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Duplicates in the array:\n");
    findDuplicates(arr, size);

    return 0;
}

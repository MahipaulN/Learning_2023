#include <stdio.h>

int countSetBits(unsigned int num) {
    int count = 0;
    while (num > 0) {
        if (num & 1) {
            count++;
        }
        num >>= 1;
    }
    return count;
}

int totalSetBits(unsigned int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += countSetBits(arr[i]);
    }
    return total;
}

int main() {
    int size;
    scanf("%d", &size);
    unsigned int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%x", &arr[i]);
    }
    int result = totalSetBits(arr, size);
    printf("Total: %d\n", result);

    return 0;
}

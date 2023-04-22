#include <stdio.h>

int max(int arr[], int n) {
    int maxNum = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int main() {
    int arr[] = {5, 10, 25, 12, 8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int maxNum = max(arr, n);
    printf("The maximum number in the array is: %d\n", maxNum);
    return 0;
}

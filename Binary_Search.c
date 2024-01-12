
#include <stdio.h>

int binarySearch(int arr[], int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
        {
            return mid;
        }

        else if (arr[mid] < target)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }

    return -1;
}

int main() {
    int arr[] = {2, 5, 7, 10, 12, 15, 18};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target = 12;
    int result = binarySearch(arr, 0, n - 1, target);

    if (result != -1) {
        printf("Element %d found at index %d\n", target, result);
    } else {
        printf("Element %d not found in the array\n", target);
    }

    return 0;
}

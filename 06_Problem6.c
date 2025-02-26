#include <stdio.h>
int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d : ",i+1 );
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements in the array: ");
    for (int i = 0; i < n; i++) {
        int alreadyPrinted = 0;
        for (int k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                alreadyPrinted = 1;
                break;
            }
        }
        if (!alreadyPrinted) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    printf("%d ", arr[i]);
                    break;
                }
            }
        }
    }
    printf("\n");
    return 0;
}
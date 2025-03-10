#include <stdio.h>

int main() {
    int n, even_count = 0, odd_count = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    int arr[n];
    
    for(int i = 0; i < n; i++) {
        printf("Enter element %d : ", i+1);
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even_count++;
        else
            odd_count++;
    }
    
    printf("Number of even elements: %d\n", even_count);
    printf("Number of odd elements: %d\n", odd_count);
    
    return 0;
}

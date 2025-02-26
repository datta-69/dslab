#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ",i+1);
        scanf("%d",&arr[i]);

    }
    int max,min;
    max = min = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        
    }
    printf("The max value is %d and the min value is %d",max,min);
    return 0;
}
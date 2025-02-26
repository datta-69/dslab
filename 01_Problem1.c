#include<stdio.h>
int main(){
    int n;
    printf("Enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    int sum = 0;

    for (int  i = 0; i < n; i++)
    {printf("Enter %d number element: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("the array elements is : ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        sum = sum + arr[i];
    }
    
    printf("\nThe sum of all array element = %d",sum);

    return 0;
}
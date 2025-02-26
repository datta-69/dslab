//1
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d",&n);
//     int arr[n];
//     int sum = 0;

//     for (int  i = 0; i < n; i++)
//     {printf("Enter %d number element: ",i+1);
//         scanf("%d",&arr[i]);
//     }
//     printf("the array elements is : ");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     for (int  i = 0; i < n; i++)
//     {
//         sum = sum + arr[i];
//     }
    
//     printf("\nThe sum of all array element = %d",sum);

//     return 0;
// }

// //2
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter number of elements: ");
//     scanf("%d",&n);
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter element %d: ",i+1);
//         scanf("%d",&arr[i]);

//     }
//     int max,min;
//     max = min = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//         if (arr[i] < min) {
//             min = arr[i];
//         }
        
//     }
//     printf("The max value is %d and the min value is %d",max,min);
//     return 0;
// }

// //3
// #include <stdio.h>

// int main() {
//     int n;

//     printf("Enter number of elements: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(int i = 0; i < n; i++) {
//         printf("Enter element %d : ", i+1);
//         scanf("%d", &arr[i]);
//     }
//     printf("The array before Reversed: ");
//     for(int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("\nThe array after reversed: ");
//     for(int i = n - 1; i >= 0; i--) {
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
//     return 0;
// }

// //4
// #include <stdio.h>

// int main() {
//     int n, even_count = 0, odd_count = 0;

//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
    
//     int arr[n];
    
//     for(int i = 0; i < n; i++) {
//         printf("Enter element %d : ", i+1);
//         scanf("%d", &arr[i]);
//     }

//     for(int i = 0; i < n; i++) {
//         if (arr[i] % 2 == 0)
//             even_count++;
//         else
//             odd_count++;
//     }
    
//     printf("Number of even elements: %d\n", even_count);
//     printf("Number of odd elements: %d\n", odd_count);
    
//     return 0;
// }

// //5
// #include <stdio.h> 
// int main() {
//     int n1, n2;   
//     printf("Enter the number of elements in first sorted array: ");
//     scanf("%d", &n1);
//     int arr1[n1];
//     printf("Enter %d sorted elements: ", n1);
//     for (int i = 0; i < n1; i++)
//         scanf("%d", &arr1[i]);  
//     printf("Enter the number of elements in second sorted array: ");
//     scanf("%d", &n2);
//     int arr2[n2];
//     printf("Enter %d sorted elements: ", n2);
//     for (int i = 0; i < n2; i++)
//         scanf("%d", &arr2[i]);
//     int merged[n1 + n2];
//     int i = 0, j = 0, k = 0;    
//     while (i < n1 && j < n2) {
//         if (arr1[i] < arr2[j])
//             merged[k++] = arr1[i++];
//         else
//             merged[k++] = arr2[j++];
//     }    
//     while (i < n1)
//         merged[k++] = arr1[i++]; 
//     while (j < n2)
//         merged[k++] = arr2[j++];    
//     printf("Merged sorted array: ");
//     for (int i = 0; i < (n1 + n2); i++)
//         printf("%d ", merged[i]);
//     printf("\n");    
//     return 0;
// }

// //6
// #include <stdio.h>
// int main() {
//     int n;
//     printf("Enter the number of elements: ");
//     scanf("%d", &n);
//     int arr[n];

//     for (int i = 0; i < n; i++) {
//         printf("Enter element %d : ",i+1 );
//         scanf("%d", &arr[i]);
//     }
//     printf("Duplicate elements in the array: ");
//     for (int i = 0; i < n; i++) {
//         int alreadyPrinted = 0;
//         for (int k = 0; k < i; k++) {
//             if (arr[i] == arr[k]) {
//                 alreadyPrinted = 1;
//                 break;
//             }
//         }
//         if (!alreadyPrinted) {
//             for (int j = i + 1; j < n; j++) {
//                 if (arr[i] == arr[j]) {
//                     printf("%d ", arr[i]);
//                     break;
//                 }
//             }
//         }
//     }
//     printf("\n");
//     return 0;
// }

// //7
// #include <stdio.h>
// #include <limits.h>
// int main() {
//     int n, i;
//     printf("Enter the number of elements in the array: ");
//     scanf("%d", &n);
//     int arr[n];
//     for(i = 0; i < n; i++) {
//         printf("Enter element %d: ", i + 1);
//         scanf("%d", &arr[i]);
//     }
//     int firstLargest = arr[0];
//     int secondLargest = INT_MIN;
//     for(i = 1; i < n; i++) {
//         if(arr[i] > firstLargest) {
//             secondLargest = firstLargest;
//             firstLargest = arr[i];
//         }
//         else if(arr[i] > secondLargest && arr[i] != firstLargest) {
//             secondLargest = arr[i];
//         }
//     }
//     if(secondLargest == INT_MIN) {
//         printf("There is no second largest element.\n");
//     } else {
//         printf("The second largest element is: %d\n", secondLargest);
//     }
//     return 0;
// }
#include<stdio.h>
int main(){
printf("Hello");
return 0;
}

#include<stdio.h>
// Sort an Array containing only '0' and '1'//

void swap(int *A, int *B) {
    int temp = *A;
    *A = *B;
    *B = temp;
}

void sortArray(int arr[], int n) 
                         {
        // taking left and right has B= left and A= right//
    int B = 0;
    int A = n - 1;

    while (B < A) {
        while (arr[B] == 0 && B < A)
            B++;

        while (arr[B] == 1 && B < A)
           A--;

        if (B < A) {
            swap(&arr[B], &arr[A]);
            B++;
            A--;
                           } 
         }  
}

int main() {
    int arr[] = {0,1,1,1,0,0,1,0,1,1,0,0,0,0,1,0,1,0};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("\nInput array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    sortArray(arr, n);

    printf("\noutput array: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
                 }


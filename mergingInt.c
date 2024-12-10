#include <stdio.h>

void sortArray(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int removeDuplicates(int arr[], int n) {
    int uniqueIndex = 0; 

    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != arr[i + 1]) {
            arr[uniqueIndex++] = arr[i];
        }
    }

    arr[uniqueIndex++] = arr[n - 1];

    return uniqueIndex; 

}

int main() {
    int size1, size2;

    printf("Enter the size of the first array: \n");
    scanf("%d", &size1);

    int array1[size1];
    printf("Enter the elements of the first array: \n");
    for (int i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Enter the size of the second array: \n");
    scanf("%d", &size2);

    int array2[size2];
    printf("Enter the elements of the second array: \n");
    for (int i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }

    int merged[size1 + size2];
    int index = 0;

    for (int i = 0; i < size1; i++) {
        merged[index++] = array1[i];
    }

    for (int i = 0; i < size2; i++) {
        merged[index++] = array2[i];
    }

    sortArray(merged, size1 + size2);

    int newSize = removeDuplicates(merged, size1 + size2);

    printf("Merged array in ascending order with unique elements: ");
    for (int i = 0; i < newSize; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}

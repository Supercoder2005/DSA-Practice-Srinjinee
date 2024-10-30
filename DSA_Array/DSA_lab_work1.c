#include <stdio.h>

#define MAX_SIZE 100

void createArray(int arr[], int *size) {
    printf("Enter the size of the array: ");
    scanf("%d", size);
    printf("Enter the elements of the array:\n");
    int i;
    for (i = 0; i < *size; i++) {
        scanf("%d", &arr[i]);
    }
}

void displayArray(int arr[], int size) {
    printf("Array elements are: ");
    int i;
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size) {
    int pos, element;
    if (*size >= MAX_SIZE) {
        printf("Array is full, cannot insert more elements.\n");
        return;
    }
    printf("Enter the position to insert (0 to %d): ", *size);
    scanf("%d", &pos);
    if (pos < 0 || pos > *size) {
        printf("Invalid position!\n");
        return;
    }
    printf("Enter the element to insert: ");
    scanf("%d", &element);
    int i;
    for (i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*size)++;
}

void deleteElement(int arr[], int *size) {
    int pos;
    if (*size <= 0) {
        printf("Array is empty, cannot delete elements.\n");
        return;
    }
    printf("Enter the position to delete (0 to %d): ", *size - 1);
    scanf("%d", &pos);
    if (pos < 0 || pos >= *size) {
        printf("Invalid position!\n");
        return;
    }
    int i;
    for (i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--;
}

void linearSearch(int arr[], int size) {
    int element, found = 0;
    printf("Enter the element to search: ");
    scanf("%d", &element);
    int i;
    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            printf("Element %d found at position %d\n", element, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", element);
    }
}

void binarySearch(int arr[], int size) {
    int element, left = 0, right = size - 1, mid;
    printf("Enter the element to search: ");
    scanf("%d", &element);
    while (left <= right) {
        mid = left + (right - left) / 2;
        if (arr[mid] == element) {
            printf("Element %d found at position %d\n", element, mid);
            return;
        }
        if (arr[mid] < element) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    printf("Element %d not found in the array.\n", element);
}

void sortArray(int arr[], int size) {
    int temp, i, j;
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr[MAX_SIZE], size = 0, choice;

    do {
        printf("\nArray Operations Menu:\n");
        printf("1. Create an array\n");
        printf("2. Display the array elements\n");
        printf("3. Insert an element\n");
        printf("4. Delete an element\n");
        printf("5. Linear Search\n");
        printf("6. Binary Search (array should be sorted)\n");
        printf("7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                createArray(arr, &size);
                break;
            case 2:
                displayArray(arr, size);
                break;
            case 3:
                insertElement(arr, &size);
                break;
            case 4:
                deleteElement(arr, &size);
                break;
            case 5:
                linearSearch(arr, size);
                break;
            case 6:
                sortArray(arr, size);  // Sorting array before binary search
                binarySearch(arr, size);
                break;
            case 7:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    } while (choice != 7);
    return 0;
}
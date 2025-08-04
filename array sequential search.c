/*#include <stdio.h>

int main() {
    int arr[100], n, i, key;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to search: ");
    scanf("%d", &key);

    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Found at position %d\n", i + 1);
        return 0;}}
    printf("Not found\n");
    return 0;
}*/


#include <stdio.h>

int main() {
    int arr[5] = {10, 30, 40, 50, 60};  // Declare and initialize array
    int i;

    printf("Array elements are:\n");
    for (i = 0; i < 5; i++) {
        printf("Element  %d = %d\n", i, arr[i]);  // Access and print
    }

    return 0;
}



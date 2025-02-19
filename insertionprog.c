#include <stdio.h>

int main() {
    int k, item, n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int la[n + 1];  // Declare array with extra space for new element
    printf("Enter %d elements:\n\n", n);
    
    for (i = 0; i < n; i++) {
        printf("Enter element %d:\n ", i + 1);
        scanf("%d", &la[i]);  // Use &la[i] to read the elements
    }
    printf("Note: --You have to enter the new element after the existing element in the array--\n\n");
    
    printf("Enter the position where the new element will be inserted: ");
    scanf("%d", &k);
    
    printf("Enter the new element: ");
    scanf("%d", &item);

    // Check if the position is valid
    if (k < 1 || k > n + 1) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for (i = n; i >= k; i--) {
        la[i] = la[i - 1];
    }

    // Insert the new element at the specified position
    la[k - 1] = item;
    n++;  // Increase the size of the array

    // Print the updated array
    printf("The updated array is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", la[i]);
    }
    printf("\n");

    return 0;
}


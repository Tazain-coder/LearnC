/*
 * Bubble Sort in C
 * ----------------
 * Bubble sort repeatedly compares adjacent elements
 * and swaps them if they are in the wrong order.
 * After each pass, the largest element "bubbles up" 
 * to the end of the array.
 */

#include <stdio.h>

int main() 
{
    int i, j, temp;
    int n = 5;   // number of elements in array
    int x[5] = {8, 3, 1, 6, 2};

    // Outer loop → number of passes
    // After each pass, one more element is in its correct position
    for (i = 0; i < n - 1; i++)  
    {
        // Inner loop → compare adjacent elements
        // We stop at (n - i - 1) because the last i elements are already sorted
        for (j = 0; j < n - i - 1; j++)  
        {
            // If the current element is bigger than the next, swap them
            if (x[j] > x[j + 1]) 
            {
                temp = x[j];
                x[j] = x[j + 1];
                x[j + 1] = temp;
            }
        }

        // Debug: print array after each pass
        printf("Pass %d: ", i + 1);
        for (int k = 0; k < n; k++)
            printf("%d ", x[k]);
        printf("\n");
    }

    // Final sorted array
    printf("\nSorted Array: ");
    for (i = 0; i < n; i++)
        printf("%d ", x[i]);

    return 0;
}

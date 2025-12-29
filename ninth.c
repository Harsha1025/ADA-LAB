#include <stdio.h>

// Global variables to store the result
int min, max;

// Function taking only 3 parameters
void findMinMax(int arr[], int low, int high) {
    int mid;

    // Base Case: Only 1 element
    if (low == high) {
        if (arr[low] < min) min = arr[low];
        if (arr[low] > max) max = arr[low];
    } 
    // Recursive Step: More than 1 element
    else {
        mid = (low + high) / 2;
        findMinMax(arr, low, mid);      // Left half
        findMinMax(arr, mid + 1, high); // Right half
    }
}

int main() {
    clrscr();
   
    printf("Enter the number of elements in array : ");
    int n;
    scanf("%d",&n);
    printf("Enter the array ele : ");
    int arr[n],i;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    // Initialize globals with the first element
    min = arr[0];
    max = arr[0];

    // Call function with exactly 3 parameters
    findMinMax(arr, 0, n - 1);

    printf("Minimum: %d\n", min);
    printf("Maximum: %d\n", max);
    getch();
    return 0;
}
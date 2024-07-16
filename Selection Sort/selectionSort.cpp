/*
How it works:
    Go through the array to find the lowest value.
    Move the lowest value to the front of the unsorted part of the array.
    Go through the array again as many times as there are values in the array.
*/
#include<iostream>
  using namespace std;
  
// Function to perform selection sort
void selectionSort(int *array, int size) {
    for (int i = 0; i < size - 1; i++) {
        int minIndex = i; // Assume the minimum is the first element
        for (int j = i + 1; j < size; j++) {
            // Update minIndex if the element at j is smaller
            if (array[j] < array[minIndex]) {
                minIndex = j;
            }
        }
        // Swap the found minimum element with the first element
        if (minIndex != i) {
            swap(array[i], array[minIndex]);
        }
    }
}

  
int main() {
    int size;
    cout << "Enter size of an array: ";
    cin >> size; // Read the size of the array from the user

    // Dynamically allocate an array of the given size
    int *arr = new int[size]; 
    cout << "Enter " << size << " elements in an array:";
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; // Read elements into the array
    }

    cout << "Elements before selection sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements before sorting
    }
    cout << endl;

    selectionSort(arr, size); // Call selection sort function to sort the array

    cout << "Elements after selection sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    delete [] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}

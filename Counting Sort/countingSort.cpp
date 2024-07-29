/*
Counting Sort is a sorting algorithm that sorts the elements of an array by counting 
the number of occurrences of each unique element in the array.

This program is only for positive numbers input.
*/

#include <iostream>
using namespace std;

void countingSort(int *inputArr, int size) {
    // Find the maximum value in the array
    int max = inputArr[0];
    for (int i = 1; i < size; i++) {
        if (inputArr[i] > max) {
            max = inputArr[i];
        }
    }

    // Initialize the count array
    int countArr[max + 1] = {0};

    // Count occurrences of each value in the input array
    for (int i = 0; i < size; i++) {
        countArr[inputArr[i]]++;
    }

    // Update the count array to hold the position of each element
    for (int i = 1; i <= max; i++) {
        countArr[i] += countArr[i - 1];
    }

    // Create an output array to store the sorted elements
    int outputArr[size];

    // Place elements in their correct position in the output array
    for (int i = size - 1; i >= 0; i--) {
        outputArr[countArr[inputArr[i]] - 1] = inputArr[i];
        countArr[inputArr[i]]--;
        //In short, countArr[inputArr[i]]--; ensures that each element, especially duplicates, is placed in the right spot in the sorted array.
    }

    // Copy the sorted elements from the output array back to the input array
    for (int i = 0; i < size; i++) {
        inputArr[i] = outputArr[i];
    }
}

int main() {
    int size;
    cout << "Enter size of the array: ";
    cin >> size; // Read the size of the array from the user

    // Dynamically allocate an array of the given size
    int *arr = new int[size];

    cout << "Enter " << size << " elements in the range (0-9): ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Read elements into the array
    }

    cout << "Elements before Counting Sort:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements before sorting
    }
    cout << endl;

    countingSort(arr, size); // Call counting sort function to sort the array

    cout << "Elements after Counting Sort:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    // Deallocate the dynamically allocated array
    delete[] arr;

    return 0; // Return 0 to indicate successful execution
}

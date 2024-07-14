/*
The Insertion Sort algorithm uses one part of the array to hold the sorted values,
and the other part of the array to hold values that are not sorted yet.

The algorithm takes one value at a time from the unsorted part of the array and
 puts it into the right place in the sorted part of the array, until the array is sorted.

*/
#include<iostream>
using namespace std;

// Function to perform insertion sort on an array
void insertionSort(int *array, int size){  
    for(int i = 0; i < size; i++){ // Loop through each element in the array
        int insertIndex = i; // Index where the current element will be inserted
        int currentValue = array[i]; // Store the current element
        int j = i - 1;
        
        // Shift elements of the sorted portion of the array to the right
        // until the correct position for currentValue is found
        while(j >= 0 && array[j] > currentValue){
            array[j + 1] = array[j];
            insertIndex = j;
            j--;
        }
        
        // Insert the current element at the correct position
        array[insertIndex] = currentValue;
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

    cout << "Elements before insertion sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements before sorting
    }
    cout << endl;

    insertionSort(arr, size); // Call insertion sort function to sort the array

    cout << "Elements after insertion sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    delete [] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}
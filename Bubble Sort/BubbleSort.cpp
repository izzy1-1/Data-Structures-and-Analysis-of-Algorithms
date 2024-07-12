#include<iostream>
using namespace std;

// Function to perform Bubble Sort on an array
void bubbleSort(int *array, int size){
    for(int i = 0; i < (size - 1); i++){ // Outer loop for each pass
        for(int j = 0; j < (size - i - 1); j++){ // Inner loop for comparing adjacent elements
            if(array[j] > array[j + 1]){ // If the current element is greater than the next element
                swap(array[j], array[j + 1]); // Swap them
            }
        } 
    }
}

int main() {
    int size;
    cout << "Enter size of an array: ";
    cin >> size; // Read the size of the array

    int *arr = new int[size]; // Dynamically allocate an array of the given size
    cout << "Enter " << size << " elements in an array:";
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; // Read elements into the array
    }

    cout << "Elements before Bubble Sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements before sorting
    }
    cout << endl;

    bubbleSort(arr, size); // Call bubble sort function to sort the array

    cout << "Elements After Bubble Sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    delete [] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}

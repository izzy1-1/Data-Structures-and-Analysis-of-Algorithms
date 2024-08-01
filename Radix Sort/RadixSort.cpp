#include <iostream>
using namespace std;

int getMax(int *arr, int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++)
        if (arr[i] > max)
            max = arr[i];
    return max;
}

void countingSort(int *inputArr, int size, int exp) {
    int outputArr[size];
    int countArr[10] = {0}; // gernally we are working on small datasets so its better we take it 10 although if we can take it maximum number 
    //we have in array but its gernally not recommended. So we take it 10.

    // Count occurrences of each digit in the input array
    for (int i = 0; i < size; i++) {
        countArr[(inputArr[i] / exp) % 10]++;
    }

    // Update the count array to hold the position of each element
    for (int i = 1; i < 10; i++) {
        countArr[i] += countArr[i - 1];
    }

    // Place elements in their correct position in the output array
    for (int i = size - 1; i >= 0; i--) {
        outputArr[countArr[(inputArr[i] / exp) % 10] - 1] = inputArr[i];
        countArr[(inputArr[i] / exp) % 10]--;
    }

    // Copy the sorted elements from the output array back to the input array
    for (int i = 0; i < size; i++) {
        inputArr[i] = outputArr[i];
    }
}

void radixSort(int *arr, int size) {
    // Find the maximum number to know the number of digits
    int max = getMax(arr, size);

    // Do counting sort for every digit. Note that instead of passing digit number, exp is passed.
    // exp is 10^i where i is the current digit number
    for (int exp = 1; max / exp > 0; exp *= 10)
        countingSort(arr, size, exp);
}

int main() {
    int size;
    cout << "Enter size of an array: ";
    cin >> size;

    // Dynamically allocate an array of the given size
    int *arr = new int[size];
    cout << "Enter " << size << " elements in an array:";
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; // Read elements into the array
    }

    cout << "Elements before sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements before sorting
    }
    cout << endl;

    radixSort(arr, size); // Call radix sort function to sort the array

    cout << "Elements after sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    delete [] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}

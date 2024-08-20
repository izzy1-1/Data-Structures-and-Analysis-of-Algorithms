#include <iostream>
using namespace std;

/*
How it works:
    The array is divided into intervals.
    Elements at each interval are sorted.
    The interval is gradually reduced until the array is fully sorted.
*/

void shellSort(int *array, int size) {
    // Start with a large interval, then reduce the interval
    for (int interval = size / 2; interval > 0; interval /= 2) {
        // Perform a gapped insertion sort for this interval size
        for (int i = interval; i < size; i++) {
            int temp = array[i];
            int j;
            // Shift earlier elements up until the correct location is found
            for (j = i; j >= interval && array[j - interval] > temp; j -= interval) {
                array[j] = array[j - interval];
            }
            // Place the temp value at its correct location
            array[j] = temp;
        }
    }
}

int main() {
    int size;
    cout << "Enter size of an array: ";
    cin >> size; // Read the size of the array

    // Dynamically allocate an array of the given size
    int *arr = new int[size];
    cout << "Enter " << size << " elements in an array:";
    for (int i = 0; i < size; i++) {
        cin >> arr[i]; // Read elements into the array
    }

    cout << "Elements before shell sorting:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements before sorting
    }
    cout << endl;

    shellSort(arr, size); // Call shell sort function to sort the array

    cout << "Elements after shell sorting:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    delete[] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}

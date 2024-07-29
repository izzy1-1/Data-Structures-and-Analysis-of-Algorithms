#include<iostream>//for using cout,cin etc
using namespace std;

void binarySearch(int *array, int end, int target) {
    int start = 0, mid, index = -1; // Initialize start, mid, and index variables

    while(start <= end) { // Continue loop while the start index is less than or equal to the end index
        mid = (start + end) / 2; // Calculate the middle index

        if(array[mid] == target) { // Check if the middle element is the target
            index = mid; // Set index to the middle index
            break; // Exit the loop as target is found
        }
        else if(array[mid] < target) { // If the middle element is less than the target
            start = mid + 1; // Adjust the start index to search in the right half
        }
        else { // If the middle element is greater than the target
            end = mid - 1; // Adjust the end index to search in the left half
        }
    }

    if(index != -1) { // If the target is found
        cout << target << " match on index:" << index; // Print the target and its index
    }
    else { // If the target is not found
        cout << target << " not found in list"; // Print that the target is not found
    }
}

int main() {
    int size, target;
    cout << "Enter size of an array: ";
    cin >> size; // Read the size of the array

    int *arr = new int[size]; // Dynamically allocate an array of given size
    cout << "Enter " << size << " elements in Sorted Order:";
    for(int i = 0; i < size; i++) {
        cin >> arr[i]; // Read elements into the array
    }
    cout << "Enter an element which you want to search from list:";
    cin >> target; // Read the target element to search for

    binarySearch(arr, (size - 1), target); // Call binary search function

    delete [] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}

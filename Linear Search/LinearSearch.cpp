#include<iostream>
using namespace std;

void linearSearch(int *array, int size, int target) {
    int index = -1;  // Initialize index to -1 indicating target not found
    for(int i = 0; i < size; i++) {
        if(array[i] == target) {
            index = i;  // Update index if target is found
            break;  // Exit loop once target is found
        }
    }
    if(index != -1) {
        cout << "Element matches in index: " << index << endl;
    } else {
        cout << "Not found the element " << target << " in the array" << endl;
    }
}

int main() {
    int size, element;
    cout << "Enter the size of the array: ";
    cin >> size;

    // Dynamically allocate array to allow runtime size determination
    int *arr = new int[size];
    cout << "Enter " << size << " elements in the array: ";
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    cout << "Enter the element you want to search in the array: ";
    cin >> element;

    linearSearch(arr, size, element);

    delete [] arr;  // Free dynamically allocated memory
    return 0;
}
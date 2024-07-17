#include<iostream>
  using namespace std;
void countingSort(int *arr,int size){

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

    countingSort(arr, size); // Call insertion sort function to sort the array

    cout << "Elements after insertion sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    delete [] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}
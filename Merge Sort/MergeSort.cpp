
#include<iostream>
  using namespace std;
  void Merge(int *arr, int start, int end, int mid){
    int i,j,k;
    i=start, j=mid+1, k=start;
    int temp[end+1];
    while(i<=mid && j<=end){
        if(arr[i] <= arr[j]){
            temp[k] = arr[i];
            i++,k++;
        }
        else{
            temp[k] = arr[j];
            j++,k++;
        }
    }
    while(i<=mid){
        temp[k] = arr[i];
        i++,k++;
    }
    while(j<=end){
        temp[k] = arr[j];
        j++,k++;
    }
    for(int p=start; p<=end;p++){
        arr[p] = temp[p];
    }
  }

  void MergeSort(int *array, int start, int end){
    if(start<end){
        int mid = (start+end)/2;
        MergeSort(array,start,mid);
        MergeSort(array,mid+1,end);
        Merge(array, start, end, mid);
    }
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

    cout << "Elements before Merge sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements before sorting
    }
    cout << endl;

    MergeSort(arr,0,(size-1)); // Call Merge sort function to sort the array

    cout << "Elements after Merge sorting:" << endl;
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " "; // Print elements after sorting
    }
    cout << endl;

    delete [] arr; // Deallocate the dynamically allocated array
    return 0; // Return 0 to indicate successful execution
}
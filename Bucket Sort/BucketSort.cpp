#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to perform bucket sort on float values
void bucketSort(float *inputArr, int size) {
    // Create empty buckets
    vector<float> buckets[size];

    // Put array elements in different buckets
    for (int i = 0; i < size; i++) {
        int bucketIndex = size * inputArr[i]; // Index in the bucket
        buckets[bucketIndex].push_back(inputArr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < size; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }
    

    // Concatenate all buckets into the input array
    int index = 0;
    for (int i = 0; i < size; i++) {
        for (size_t j = 0; j < buckets[i].size(); j++) {
            inputArr[index++] = buckets[i][j];
        }
    }
}

// Function to perform bucket sort on integer values
void bucketSort(int *inputArr, int size) {
    // Find the maximum value in the array to determine the range of the buckets
    int max = inputArr[0];
    for (int i = 1; i < size; i++) {
        if (inputArr[i] > max) {
            max = inputArr[i];
        }
    }

    // Create the buckets
    int bucketCount = max / size + 1;
    vector<int> buckets[bucketCount];

    // Put array elements in different buckets
    for (int i = 0; i < size; i++) {
        int bucketIndex = inputArr[i] / size;
        buckets[bucketIndex].push_back(inputArr[i]);
    }

    // Sort individual buckets
    for (int i = 0; i < bucketCount; i++) {
        sort(buckets[i].begin(), buckets[i].end());
    }

    // Concatenate all buckets into the input array
    int index = 0;
    for (int i = 0; i < bucketCount; i++) {
        for (size_t j = 0; j < buckets[i].size(); j++) {
            inputArr[index++] = buckets[i][j];
        }
    }
}

int main() {
    char choice;
    cout << "Do you want to sort integers or floating-point numbers? (i/f): ";
    cin >> choice;

    if (choice == 'i') {
        int size;
        cout << "Enter size of the array: ";
        cin >> size;

        int *arr = new int[size];
        cout << "Enter " << size << " integer elements: ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cout << "Elements before Bucket Sort:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        bucketSort(arr, size);

        cout << "Elements after Bucket Sort:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
    } else if (choice == 'f') {
        int size;
        cout << "Enter size of the array: ";
        cin >> size;

        float *arr = new float[size];
        cout << "Enter " << size << " floating-point elements in the range [0, 1): ";
        for (int i = 0; i < size; i++) {
            cin >> arr[i];
        }

        cout << "Elements before Bucket Sort:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        bucketSort(arr, size);

        cout << "Elements after Bucket Sort:" << endl;
        for (int i = 0; i < size; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        delete[] arr;
    } else {
        cout << "Invalid choice." << endl;
    }

    return 0;
}

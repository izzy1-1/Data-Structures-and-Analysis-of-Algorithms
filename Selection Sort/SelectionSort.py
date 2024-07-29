"""
How it works:

    Go through the array to find the lowest value.
    Move the lowest value to the front of the unsorted part of the array.
    Go through the array again as many times as there are values in the array.
"""
def selectionSort(array):
    # Iterate through each element in the array except the last one
    for i in range(len(array) - 1):
        minIndex = i  # Assume the minimum is the first element of the unsorted segment
        # Look for the smallest element in the remaining unsorted segment
        for j in range(i + 1, len(array)):
            if array[j] < array[minIndex]:  # If a smaller element is found
                minIndex = j  # Update the index of the minimum element
        # If the minimum element is not the element at the current index, swap them
        if minIndex != i:
            temp = array[minIndex]  # Store the minimum element
            array[minIndex] = array[i]  # Replace it with the current element
            array[i] = temp  # Place the stored minimum element in its correct position

def main():
    # Get the size of the array from the user
    size = int(input("Enter size of an array: "))
    arr = []  # Initialize an empty array
    print(f"Enter {size} elements in an array:")
    # Collect the elements from the user
    for _ in range(size):
        arr.append(int(input()))  # Append each input element to the array
    print(f"Elements before selection sorting: {arr}")  # Display the array before sorting
    selectionSort(arr)  # Call the selection sort function to sort the array
    print(f"Elements After selection sorting: {arr}")  # Display the sorted array

if __name__ == "__main__":
    main()  # Execute the main function when the script is run

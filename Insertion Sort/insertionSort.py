def insertion_sort(array):
    for i in range(len(array)):  # Loop through each element in the array
        current_value = array[i]  # Store the current element
        j = i - 1
        # Shift elements of the sorted portion of the array to the right
        # until the correct position for current_value is found
        while j >= 0 and array[j] > current_value:
            array[j + 1] = array[j]
            j -= 1
        
        # Insert the current element at the correct position
        array[j + 1] = current_value

def main():
    size = int(input("Enter size of an array: "))  # Read the size of the array from the user
    arr = []  # Initialize an empty list to hold the array elements
    
    print(f"Enter {size} elements in an array:")
    for _ in range(size):
        arr.append(int(input()))  # Read elements into the array
    
    print(f"Elements before insertion sorting:{arr}")
    
    insertion_sort(arr)  # Call insertion sort function to sort the array
    
    print(f"Elements after insertion sorting:{arr}")

if __name__ == "__main__":
    main()  # Call the main function to execute the program

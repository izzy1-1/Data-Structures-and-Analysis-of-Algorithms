def bubble_sort(array):
    size = len(array)
    for i in range(size - 1): # Outer loop for each pass
        for j in range(size - i - 1): # Inner loop for comparing adjacent elements
            if array[j] > array[j + 1]: # If the current element is greater than the next element
                array[j], array[j + 1] = array[j + 1], array[j] # Swap them

# Main function
def main():
    size = int(input("Enter size of an array: ")) # Read the size of the array
    arr = [] # Create an empty list to store the elements

    print(f"Enter {size} elements in an array:")
    for _ in range(size):
        arr.append(int(input())) # Read elements into the array

    print("Elements before Bubble Sorting:")
    print(" ".join(map(str, arr))) # Print elements before sorting
    
    bubble_sort(arr) # Call bubble sort function to sort the array

    print("Elements After Bubble Sorting:")
    print(" ".join(map(str, arr))) # Print elements after sorting

# Execute main function
if __name__ == "__main__":
    main()

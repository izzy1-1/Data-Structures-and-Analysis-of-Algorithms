def binary_search(array, end, target):
    start, index = 0, -1  
    # Initialize start and index variables
    while start <= end:  
        mid = (start + end) // 2 

        if array[mid] == target:  
            # Check if the middle element is the target
            index = mid  
            # Set index to the middle index
            break  
            # Exit the loop as target is found
        elif array[mid] < target:  # If the middle element is less than the target
            start = mid + 1  
            # Adjust the start index to search in the right half
        else:  # If the middle element is greater than the target
            end = mid - 1  
            # Adjust the end index to search in the left half

    if index != -1:  # If the target is found
        print(f"{target} match on index: {index}")  
        # Print the target and its index
    else:  # If the target is not found
        print(f"{target} not found in list")  
        # Print that the target is not found


def main():
    size = int(input("Enter size of an array: "))  
    # Read the size of the array

    arr = []  
    # Create an empty list for the array
    print(f"Enter {size} elements in Sorted Order:")
    for _ in range(size):
        element = int(input())  
        # Read elements into the array
        arr.append(element)

    target = int(input("Enter an element which you want to search from list: ")) 
     # Read the target element to search for

    binary_search(arr, (size - 1), target)  
    # Call binary search function

if __name__ == "__main__":
    main()  # Run the main function

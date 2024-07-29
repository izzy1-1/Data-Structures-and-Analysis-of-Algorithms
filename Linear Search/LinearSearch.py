def linearSearch(array, size, target):
    """
    Performs a linear search on the array to find the target element.
    If found, prints the index of the target element; otherwise, indicates that the target is not found.
    """
    index = -1  # Initialize index to -1 indicating target is not found yet
    for i in range(size):
        if array[i] == target:
            index = i  # Update index if target is found
            break  # Exit the loop once the target is found
    if index != -1:
        print(f"Element matches in index: {index}")
    else:
        print(f"Not found the element {target} in the array")

def main():
    """
    Main function to take user input, create an array, and search for an element using linearSearch.
    """
    size = int(input("Enter the size of the array: "))
    print(f"Enter {size} elements in an array")
    arr = []
    for _ in range(size):
        arr.append(int(input()))
    element = int(input("Enter the element you want to search in the array: "))
    linearSearch(arr, size, element)

if __name__ == "__main__":
    main()
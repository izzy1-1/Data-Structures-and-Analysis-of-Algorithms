
def main():
    # Main function
def main():
    size = int(input("Enter size of an array: ")) # Read the size of the array
    arr = [] # Create an empty list to store the elements

    print(f"Enter {size} elements in an array:")
    for _ in range(size):
        arr.append(int(input())) # Read elements into the array

    print(f"Elements before bubble sorting: {arr}")  # Display the array before sorting
    bubbleSort(arr)  # Call bubble sort function to sort the array
    print(f"Elements After bubble sorting: {arr}")  # Display the sorted array
    
if __name__ == "__main___":
    return main()
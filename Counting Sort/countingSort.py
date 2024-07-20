"""
Counting Sort is a sorting algorithm that sorts the elements of an array by counting 
the number of occurrences of each unique element in the array.

This program is only for positive numbers input.
"""
def countingSort(input_arr):
    # Find the maximum value in the array
    max_val = max(input_arr)

    # Initialize the count array
    count_arr = [0] * (max_val + 1)

    # Count occurrences of each value in the input array
    for num in input_arr:
        count_arr[num] += 1

    # Update the count array to hold the position of each element
    for i in range(1, len(count_arr)):
        count_arr[i] += count_arr[i - 1]

    # Create an output array to store the sorted elements
    output_arr = [0] * len(input_arr)

    # Place elements in their correct position in the output array
    for num in reversed(input_arr):
        output_arr[count_arr[num] - 1] = num
        count_arr[num] -= 1
        # In short, count_arr[input_arr[i]]--; ensures that each element, especially duplicates, is placed in the right spot in the sorted array.

    # Copy the sorted elements from the output array back to the input array
    for i in range(len(input_arr)):
        input_arr[i] = output_arr[i]

def main():
    size = int(input("Enter size of the array: "))
    arr = []
    print(f"Enter {size} elements in the range(0-9): ")
    for _ in range(size):
        arr.append(int(input()))
    print(f"Elements before Counting Sort: {arr}")
    countingSort(arr)
    print(f"Elements after Counting Sort:{arr}")
        
if __name__ == "__main__":
    main()  # Call the main function to execute the program

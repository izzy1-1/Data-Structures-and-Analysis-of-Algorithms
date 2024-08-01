def getMax(arr):
    max_val = arr[0]
    for num in arr:
        if num > max_val:
            max_val = num
    return max_val

def countingSort(arr, size, exp):
    outputArr = [0] * size
    countArr = [0] * 10

    # Count occurrences of each digit in the input array
    for i in range(size):
        index = (arr[i] // exp) % 10
        countArr[index] += 1

    # Update the count array to hold the position of each element
    for i in range(1, 10):
        countArr[i] += countArr[i - 1]

    # Place elements in their correct position in the output array
    for i in range(size - 1, -1, -1):
        index = (arr[i] // exp) % 10
        outputArr[countArr[index] - 1] = arr[i]
        countArr[index] -= 1

    # Copy the sorted elements from the output array back to the input array
    for i in range(size):
        arr[i] = outputArr[i]

def radixSort(arr, size):
    # Find the maximum number to know the number of digits
    max_val = getMax(arr)

    # Do counting sort for every digit. Note that instead of passing digit number, exp is passed.
    # exp is 10^i where i is the current digit number
    exp = 1
    while max_val // exp > 0:
        countingSort(arr, size, exp)
        exp *= 10

def main():
    size = int(input("Enter size of an array: "))
    arr = []
    print(f"Enter {size} elements in an array:")
    for _ in range(size):
        arr.append(int(input()))

    print(f"Elements before sorting: {arr}")
    radixSort(arr, size)
    print(f"Elements after sorting: {arr}")

if __name__ == "__main__":
    main()

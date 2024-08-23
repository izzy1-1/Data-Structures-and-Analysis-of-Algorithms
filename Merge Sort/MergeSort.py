def Merge(arr, start, end, mid):
    i = start
    j = mid + 1
    temp = []

    # Merging the two halves
    while i <= mid and j <= end:
        if arr[i] <= arr[j]:
            temp.append(arr[i])
            i += 1
        else:
            temp.append(arr[j])
            j += 1

    # Adding remaining elements from the left half (if any)
    while i <= mid:
        temp.append(arr[i])
        i += 1

    # Adding remaining elements from the right half (if any)
    while j <= end:
        temp.append(arr[j])
        j += 1

    # Copying sorted elements back into the original array
    for p in range(len(temp)):
        arr[start + p] = temp[p]

def MergeSort(arr, start, end):
    if start < end:
        mid = (start + end) // 2
        MergeSort(arr, start, mid)
        MergeSort(arr, mid + 1, end)
        Merge(arr, start, end, mid)

def main():
    size = int(input("Enter the size of the array: "))
    arr = []
    print(f"Enter {size} elements in the array:")
    for _ in range(size):
        arr.append(int(input()))
    
    print(f"Elements before Merge Sort: {arr}")
    MergeSort(arr, 0, size - 1)
    print(f"Elements after Merge Sort: {arr}")

if __name__ == "__main__":
    main()

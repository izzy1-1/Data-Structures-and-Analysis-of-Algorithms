def shell_sort(arr):
    """
    How it works:
        The array is divided into intervals.
        Elements at each interval are sorted.
        The interval is gradually reduced until the array is fully sorted.
    """
    n = len(arr)
    interval = n // 2
    while interval > 0:
        for i in range(interval, n):
            temp = arr[i]
            j = i
            # Shift earlier elements up until the correct location is found
            while j >= interval and arr[j - interval] > temp:
                arr[j] = arr[j - interval]
                j -= interval
            arr[j] = temp
        interval //= 2

def main():
    size = int(input("Enter size of the array: "))  # Read the size of the array

    arr = []
    print(f"Enter {size} elements in the array:")
    for _ in range(size):
        arr.append(int(input()))  # Read elements into the array

    print("Elements before shell sorting:")
    print(" ".join(map(str, arr)))  # Print elements before sorting

    shell_sort(arr)  # Call shell sort function to sort the array

    print("Elements after shell sorting:")
    print(" ".join(map(str, arr)))  # Print elements after sorting

if __name__ == "__main__":
    main()
